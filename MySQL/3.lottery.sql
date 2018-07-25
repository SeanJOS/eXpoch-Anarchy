DROP TABLE IF EXISTS `xtra_lottery`;
CREATE TABLE IF NOT EXISTS `xtra_lottery` (
  `uid` varchar(32) NOT NULL,
  `noScratchies` smallint(5) unsigned NOT NULL DEFAULT '0',
  `number` varchar(15) NOT NULL,
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

DROP TABLE IF EXISTS `xtra_lottery_winner`;
CREATE TABLE IF NOT EXISTS `xtra_lottery_winner` (
`uid` int(11) NOT NULL AUTO_INCREMENT,
  `account_uid` varchar(32) NOT NULL,
  `prize` varchar(60) NOT NULL,
  `source` varchar(30) NOT NULL DEFAULT 'VehiclePrize',
  `sent` tinyint(1) NOT NULL DEFAULT '0',
  `created_at` datetime DEFAULT NULL,
  PRIMARY KEY (`uid`),
  KEY `source` (`source`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;


