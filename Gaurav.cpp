<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ties</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0-beta3/css/all.min.css">
    <style>
        /* Reset some default browser styles */
        body, h1, h2, p, ul, li {
            margin: 0;
            padding: 0;
        }

        /* Set a background color for the entire page */
        body {
            background-color: #f5f5f5;
            font-family: Arial, sans-serif;
            color: #333;
        }

        /* Page container styles */
        .container {
            max-width: 800px; /* Adjust the width as needed */
            margin: 0 auto;
            padding: 20px;
        }

        /* Header Styles */
        header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            background-color: #fff;
            border-bottom: 1px solid #ddd;
            padding: 10px 20px;
        }

        header h1 {
            font-size: 24px;
        }

        /* Left Sidebar Styles */
        .sidebar {
            background-color: #333;
            color: #fff;
            width: 250px;
            height: 100%;
            position: fixed;
            top: 0;
            left: -250px;
            transition: left 0.3s ease-in-out;
        }

        .sidebar.show {
            left: 0;
        }

        .sidebar-toggle {
            cursor: pointer;
            font-size: 24px;
            padding: 10px;
        }

        /* Sidebar Menu Styles */
        .menu {
            list-style: none;
            padding: 0;
        }

        .menu-item {
            padding: 10px 20px;
            transition: background-color 0.3s;
        }

        .menu-item:hover {
            background-color: #444;
        }

        /* Close Button Styles */
        .close-button {
            text-align: right;
            padding: 10px;
            cursor: pointer;
        }

        .close-button i {
            font-size: 24px;
        }

        /* Main Content Styles */
        .main-content {
            margin-left: 250px;
        }

        /* Post Styles */
        .post {
            background-color: #fff;
            border: 1px solid #ddd;
            margin-bottom: 20px;
            padding: 10px;
        }

        .post img {
            max-width: 100%;
            height: auto;
        }

        /* Like and Comment Styles */
        .like-comment {
            display: flex;
            justify-content: space-between;
            margin-top: 10px;
        }

        .like-comment i {
            margin-right: 5px;
        }

        /* Comments Styles */
        .comments {
            margin-top: 10px;
            padding-left: 10px;
        }

        .comment {
            margin-bottom: 5px;
        }
    </style>
</head>
<body>
    <header>
        <div class="sidebar-toggle" onclick="toggleSidebar()">
            <i class="fas fa-bars"></i>
        </div>
        <h1>Ties</h1>
    </header>

    <!-- Sidebar -->
    <div class="sidebar" id="sidebar">
        <div class="close-button" onclick="closeSidebar()">
            <i class="fas fa-times"></i>
        </div>
        <ul class="menu">
            <li class="menu-item">Home</li>
            <li class="menu-item">Explore</li>
            <li class="menu-item">Favorites</li>
            <li class="menu-item">Community Updates</li>
            <li class="menu-item">Notifications</li>
        </ul>
    </div>

    <!-- Main Content -->
    <div class="main-content">
        <!-- Post 1 -->
        <div class="post">
            <img src="https://via.placeholder.com/400x400" alt="Post 1">
            <div class="like-comment">
                <div class="like">
                    <i class="fas fa-heart"></i> 100 Likes
                </div>
                <div class="comment">
                    <i class="fas fa-comment"></i> 5 Comments
                </div>
            </div>
            <div class="comments">
                <div class="comment">
                    <strong>User1:</strong> Beautiful photo!
                </div>
                <div class="comment">
                    <strong>User2:</strong> Amazing!
                </div>
                <!-- Add more comments as needed -->
            </div>
        </div>

        <!-- Post 2 -->
        <div class="post">
            <img src="https://via.placeholder.com/400x400" alt="Post 2">
            <div class="like-comment">
                <div class="like">
                    <i class="fas fa-heart"></i> 75 Likes
                </div>
                <div class="comment">
                    <i class="fas fa-comment"></i> 3 Comments
                </div>
            </div>
            <div class="comments">
                <div class="comment">
                    <strong>User3:</strong> Awesome shot!
                </div>
                <!-- Add more comments as needed -->
            </div>
        </div>

        <!-- Add more posts as needed -->
    </div>

    <script>
        function toggleSidebar() {
            const sidebar = document.getElementById("sidebar");
            sidebar.classList.toggle("show");
        }

        function closeSidebar() {
            const sidebar = document.getElementById("sidebar");
            sidebar.classList.remove("show");
        }
    </script>
</body>
</html>
