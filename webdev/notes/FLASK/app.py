from flask import Flask, redirect, url_for, request , render_template

app = Flask(__name__)

@app.route('/')
def homr():
    return render_template("name.html", title ="Home Page", content ="This is the homepage of my website")

@app.route("/<name>")
def user(name):
     return render_template("name.html", title =f"{name}'s Page", content =f"This is the indivualized content for {name}")

@app.route('/test')
def testing():
     return render_template("name.html", title =f"Test Page", content =f"Testing stuff")

@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        name = request.form['username']
        return f"Hello {name}!"
    return render_template(name.html)




if __name__ == '__main__':
    app.run()