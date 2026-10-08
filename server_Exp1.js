 
// Import express 
const express = require('express'); 
const app = express(); 
 
// Middleware to parse JSON data 
app.use(express.json()); 
 
// PORT 
const PORT = 3000; 
 
// Home route 
app.get('/', (req, res) => { 
  res.send('Welcome to the Express.js routing example!'); 
}); 
 
// Route with route parameters 
app.get('/user/:id', (req, res) => { 
  const userId = req.params.id; 
  res.send(`User ID from route parameter is: ${userId}`); 
}); 
 
// Route with multiple route parameters 
app.get('/user/:userId/book/:bookId', (req, res) => { 
  const { userId, bookId } = req.params; 
  res.send(`User ID: ${userId}, Book ID: ${bookId}`); 
}); 
 
// Route with query parameters 
app.get('/search', (req, res) => { 
  const { keyword, limit } = req.query; 
  res.send(`Search keyword: ${keyword}, Limit: ${limit}`); 
}); 
 
// POST route to demonstrate body parsing 
app.post('/user', (req, res) => { 
  const { name, age } = req.body; 
  res.send(`Received user data: Name = ${name}, Age = ${age}`); 
}); 
// URL building example 
app.get('/build-url', (req, res) => { 
  const userId = 42; 
  const bookId = 7; 
  const builtUrl = `/user/${userId}/book/${bookId}`; 
  res.send(`Dynamically built URL: ${builtUrl}`); 
}); 
 
// Catch-all route for undefined paths 
app.use((req, res) => { 
  res.status(404).send('404 Not Found'); 
});
 
// Start server 
app.listen(PORT, () => { 
  console.log(`Server running on http://localhost:${PORT}`); 
});





//  Home            : http://localhost:3000/
// | Route parameter : http://localhost:3000/user/101
// | Multiple parameters : http://localhost:3000/user/101/book/25 
// | Query parameters  : http://localhost:3000/search?keyword=python&limit=10
// | Build URL          : http://localhost:3000/build-url 
// | Invalid route |     : http://localhost:3000/hello
// | POST | `POST http://localhost:3000/user` |
