-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: localhost    Database: vehicle
-- ------------------------------------------------------
-- Server version	5.7.21-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `contents`
--

DROP TABLE IF EXISTS `contents`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `contents` (
  `SystemID` int(25) NOT NULL AUTO_INCREMENT,
  `EmployeeName` varchar(25) NOT NULL,
  `items` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`SystemID`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `contents`
--

LOCK TABLES `contents` WRITE;
/*!40000 ALTER TABLE `contents` DISABLE KEYS */;
INSERT INTO `contents` VALUES (1,'Bob','500 Apples'),(2,'Christina','Not Available'),(3,'Joe','500 Watermelons'),(4,'John','Not Available'),(5,'Mary','Not Available'),(6,'Sean','Not Available'),(7,'Bob','200 Pears'),(8,'Bob','Not Available'),(9,'Bob','500 Watermelons'),(10,'Christina','Not Available');
/*!40000 ALTER TABLE `contents` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `user` (
  `SystemID` int(25) NOT NULL AUTO_INCREMENT,
  `EmployeeName` varchar(25) NOT NULL,
  `EmployeeID` int(11) NOT NULL,
  PRIMARY KEY (`SystemID`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (1,'Bob',24680),(2,'Christina',34567),(3,'Joe',13579),(4,'John',54321),(5,'Mary',23456),(6,'Sean',12345);
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `vehicles`
--

DROP TABLE IF EXISTS `vehicles`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicles` (
  `SystemID` int(25) NOT NULL AUTO_INCREMENT,
  `EmployeeName` varchar(25) NOT NULL,
  `EmployeeID` int(11) NOT NULL,
  `Passengers` varchar(255) DEFAULT NULL,
  `FuelCost` double NOT NULL,
  `InsuranceName` varchar(50) DEFAULT NULL,
  `InsuranceNumber` varchar(50) DEFAULT NULL,
  `Date` date NOT NULL,
  `Miles` int(11) NOT NULL,
  PRIMARY KEY (`SystemID`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vehicles`
--

LOCK TABLES `vehicles` WRITE;
/*!40000 ALTER TABLE `vehicles` DISABLE KEYS */;
INSERT INTO `vehicles` VALUES (1,'Bob',24680,'0',50,'Not Available','Not Available','2018-02-22',500),(2,'Christina',34567,'0',100,'Not Available','Not Available','2018-02-01',1000),(3,'Joe',13579,'0',60,'Not Available','Not Available','2018-02-08',600),(4,'John',54321,'3',200,'StateFarm','ABC123','2017-12-23',2000),(5,'Mary',23456,'2',150,'StateFarm','CBA123','2018-01-18',1500),(6,'Sean',12345,'1',250,'Geico','BCA123','2018-01-05',2500),(7,'Bob',24680,'0',50,'Not Available','Not Available','2018-03-01',500),(8,'Bob',24680,'0',100,'Not Available','Not Available','2018-02-01',1000),(9,'Bob',24680,'0',200,'Not Available','Not Available','2018-01-22',2000),(10,'Christina',34567,'4',25,'State Farm','123ACV','2018-03-22',500);
/*!40000 ALTER TABLE `vehicles` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-10-30 14:02:11
