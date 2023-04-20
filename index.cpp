<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Netflix</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    
</body>
</html>
<!DOCTYPE html>
<html>
<head>
	<title>Netflix Navbar Example</title>
	<style>
		body {
			margin: 0;
			padding: 0;
		}

		.navbar {
			background-color: #141414;
			display: flex;
			justify-content: space-between;
			align-items: center;
			padding: 10px 50px;
		}

		.navbar-brand {
			color: #fff;
			font-size: 28px;
			font-weight: bold;
			text-decoration: none;
		}

		.navbar-links {
			display: flex;
			flex-direction: row;
			list-style: none;
			margin: 0;
			padding: 0;
		}

		.navbar-link {
			margin-left: 20px;
			color: #fff;
			font-size: 18px;
			font-weight: bold;
			text-decoration: none;
			transition: color 0.2s ease;
		}

		.navbar-link:hover {
			color: #e50914;
		}
	</style>
</head>
<body>
	<nav class="navbar">
		<a href="#" class="navbar-brand">Netflix</a>
		<ul class="navbar-links">
			<li><a href="#" class="navbar-link">Home</a></li>
			<li><a href="#" class="navbar-link">TV Shows</a></li>
			<li><a href="#" class="navbar-link">Movies</a></li>
			<li><a href="#" class="navbar-link">New & Popular</a></li>
			<li><a href="#" class="navbar-link">My List</a></li>
		</ul>
	</nav>
</body>
</html>

<!DOCTYPE html>

<html>

<head>
    <title>My first website</title>
</head>
<body>
    <!--  MP4, WebM, and Ogg -->

    <video controls autoplay muted loop width="500">
        <source src=B869B0CA-57C1-4B64-AFBE-5396E5B3386E.mp4>
        This browser does not support HTML5 audio
    </video>    

</body>

</html>

<!DOCTYPE html>
<html>
<head>
	<title>Button Example</title>
	<script>
		function displayMessage() {
			var message = "I love you Mario, happy 5 months together! Thanks for make me believe love each day";
			document.getElementById("message").textContent = message;
		}
	</script>
</head>
<body>
	<button onclick="displayMessage()">Click me!</button>
	<p id="message"></p>
</body>
</html>
