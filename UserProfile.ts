/*
This app demonstrates creating a class using TypeScript. The class has private properties and public methods. The class is then used to create an object and call its methods.
To use this app, run the following command:
tsc UserProfile.ts
node UserProfile.js
*/

/*
Create a class called 'UserProfile' with the following private properties:
- username: string
- email: string
- age: number
- phoneNumber: string

Define the following public methods:
- A constructor that initializes the properties of the class
- A method called printProfile that prints the user's profile information
- A method that updates the user email
- A method that updates the user phone number

Validate the email and phone number before updating them. The email should contain the '@' symbol and the phone number should be a 10-digit number.
*/

class UserProfile
{
    private username: string;
    private email: string;
    private age: number;
    private phoneNumber: string;

    constructor(username: string, email: string, age: number, phoneNumber: string)
    {
        this.username = username;
        this.email = email;
        this.age = age;
        this.phoneNumber = phoneNumber;
    }

    printProfile(): void
    {
        console.log(`Username: ${this.username}`);
        console.log(`Email: ${this.email}`);
        console.log(`Age: ${this.age}`);
        console.log(`Phone Number: ${this.phoneNumber}`);
    }

    updateEmail(email: string): void
    {
        if(email.includes('@'))
        {
            this.email = email;
            console.log('Email updated successfully');
        }
        else
        {
            console.log('Invalid email address');
        }
    }

    updatePhoneNumber(phoneNumber: string): void
    {
        if(phoneNumber.length === 10 && !isNaN(Number(phoneNumber)))
        {
            this.phoneNumber = phoneNumber;
            console.log('Phone number updated successfully');
        }
        else
        {
            console.log('Invalid phone number');
        }
    }
}

/*
Create an object of the class 'UserProfile' and call the methods to test the class.
*/

let user = new UserProfile('john_doe', 'andrew@scoppa.org', 30, '1234567890');
user.printProfile();
user.updateEmail('andy@scoppa.org');
user.updatePhoneNumber('9876543210');
