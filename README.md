# Practical_Assignment_1
This is my first assignment of CNG140 at METU(software engineering)
MIDDLE EAST TECHNICAL UNIVERSITY, NORTHERN CYPRUS CAMPUS CNG140 C Programming – Programming Assignment 1



Programming Assignment 1: MAC Address Analyzer
Purpose:


The main purpose of this programming assignment is to revise the topics that we have covered in the first three weeks including fundamentals of C programming, conditional statements and repetitive statements. In this assignment, you will also practice character data types and numbers in different bases.

Description:


In this programming assignment, your goal is to create a C program that can be used to check the validity and analyse a given MAC address. You will mainly do the following. You will ask the user to enter a MAC address and you will check if it is valid. If it is valid you will allow the user to analyse the given MAC address.

Programming Requirements:


Media Access Control (MAC) Addresses are unique hardware number of a computer, which is embedded into network card during the time of manufacturing and also known as Physical Address of a network device. MAC Address is a 12-digit hexadecimal number, which is represented by Colon-Hexadecimal notation. An example valid MAC address is as follows:

00-08-20-83-53-D1

This MAC address is composed of 12-digit hexadecimal number which are grouped into 6 groups. Each group is known as an octet. Therefore, a MAC address is composed of 6 octets.

Note that, in hexadecimal also known as base 16, you can only accept 0..9 and A..F. Therefore, the following is not a valid MAC address:

G0-08-20-83-53-D1	➔ G is not a valid hexadecimal digit.

Similarly, Note that the MAC address is invalid if the number of octets is less than 6.

Each of the octets in a MAC address have a particular meaning. These are illustrated in the following figure.

 
Your programming task is to write a C program that will first check if the entered MAC address is valid and then will do the following analysis of the given MAC address:

a)	Unicast or Multicast: A MAC address can be unicast or multicast. This is specified in the first octet in the MAC address. When the first octet is converted to binary, if the right most digit is o then the MAC address is unicast. If it is 1 then it is multicast. For example, given the following MAC address:

00-08-20-83-53-D1

First octet is 00 which is converted to binary as 00000000 and since the last digit is zero then this MAC address is unicast.

Another example, given the following MAC address:

01-08-20-83-53-D1

First octet is 01 which is converted to binary as 00000001 and since the last digit is one then this MAC address is multicast.

b)	Global or Local: Addresses can either be globally or locally administered. A globally administered address is uniquely assigned to a device by its manufacturer. A locally administered address is assigned to a device by software or a network administrator, overriding the burned-in address for physical devices. This is specified in the first octet of the address. If the digit before the last digit is zero then it is global, if it is one then it is local. For example, given the following MAC address:

00-08-20-83-53-D1

First octet is 00 which is converted to binary as 00000000 and since the digit before the last digit is zero then this MAC address is global.

Another example, given the following MAC address:

02-08-20-83-53-D1

First octet is 02 which is converted to binary as 00000010 and since the digit before the last digit is one then this MAC address is local.

c)	Organizational Unique Identifier: First 6-digits or first 3-octets (say 00-40-96) of MAC Address identifies the manufacturer, called as OUI (Organizational Unique Identifier). In your program, assume that we only know the following three. If another OUI is entered then your program should report that, that OUI is unknown.

Organisation	OUI
Cisco	CC-46-D6 OR 00-08-20
Google	3C-5A-B4
Huawei	00-9A-CD

For example, given the following MAC address:

00-08-20-83-53-D1

Since the first three octets are 00-08-20, then we can say that the manufacturer is Cisco.
Another example is as follows:

00-9A-CD-83-53-D1

Since the first three octets are 00-9A-CD then we can say that the manufacturer is Huawei.
Sample Run:

 
Welcome to MAC analyser!

Please enter a MAC address: 00-08-20-83-53 This is not a valid MAC address!

Please enter a MAC address: 00-08-20-83-53-DG This is not a valid MAC address!

Please enter a MAC address: 00-08-20-83-53-D1 This is valid!

==================
1.	Is It Unicast or Multicast?
2.	Is It Global or Local?

3.	What is the Manufacturer Info?
4.	Enter Another MAC address
5.	Exit

==================
What would you like to do? 1

Is It Unicast or Multicast?

Unicast: First bit = 0.

==================

1.	Is It Unicast or Multicast?
2.	Is It Global or Local?
3.	What is the Manufacturer Info?

4.	Enter Another MAC address
5.	Exit
==================

What would you like to do? 2

Is It Global or Local?

Global: Second bit = 0.

==================
1.	Is It Unicast or Multicast?

2.	Is It Global or Local?
3.	What is the Manufacturer Info?
4.	Enter Another MAC address

5.	Exit
==================
What would you like to do? 3

What is the Manufacturer Info?
Manufacturer Info: Cisco

==================
1.	Is It Unicast or Multicast?

2.	Is It Global or Local?
3.	What is the Manufacturer Info?
4.	Enter Another MAC address
5.	Exit

==================
What would you like to do:4

Please enter a MAC address: 11-08-20-83-53-11 Valid MAC Address!

==================
1.	Is It Unicast or Multicast?
2.	Is It Global or Local?

3.	What is the Manufacturer Info?
4.	Enter Another MAC address
5.	Exit

==================
What would you like to do:3
 
What is the Manufacturer Info?
Manufacturer Info: Unknown

==================
1.	Is It Unicast or Multicast?

2.	Is It Global or Local?
3.	What is the Manufacturer Info?
4.	Enter Another MAC address

5.	Exit
==================
What would you like to do:5

Byyeee!


