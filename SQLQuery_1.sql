create table vedansh1_Team (
	name varchar(20),
	city varchar(20),
	coach varchar(20),
	captain varchar(20),
	players int
)

select * from vedansh1_Team;


create table vedansh1_Player (
	name varchar(20),
	position varchar(20),
	skill_level int,
	injury_records int,
);

select * from vedansh1_Player;


create table vedansh1_Game (
	host_team varchar(20),
	guest_team varchar(20),
	date Date,
	score int
);

select * from vedansh1_Game;



create table vedansh1_NHL (
	name varchar(20),
	city varchar(20),
	coach varchar(20),
	captain varchar(20),
	players int
);

drop table vedansh1_NHL;

alter table vedansh1_Team
add country varchar(20);