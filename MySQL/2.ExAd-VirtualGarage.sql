## Database
* Run the following sql command in you database. 
```sql
	ALTER TABLE `vehicle` ADD `territory_id` INT(11) UNSIGNED NULL DEFAULT NULL;
	ALTER TABLE `vehicle` ADD CONSTRAINT `vehicle_ibfk_2` FOREIGN KEY (`territory_id`) REFERENCES `territory`(`id`) ON DELETE CASCADE ON UPDATE RESTRICT;
```