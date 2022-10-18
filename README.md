Ứng dụng nghe nhạc đơn giản
- Nguyễn Đăng Quý
- Võ Tuấn Hưng
- Đỗ Đức Phong
- Nguyễn Ngọc Huy (Trưởng nhóm)
- Nguyễn Trọng Quý

- Database

create table music_app.user (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    user_name VARCHAR(50) NOT NULL,
    password VARCHAR(50) NOT NULL,
    name VARCHAR(50) NOT NULL,
    email VARCHAR(50) NOT NULL
);

create table music_app.role (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    role_name VARCHAR(50) NOT NULL,
    description text NOT NULL
);

create table music_app.user_role (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
     user_id INTEGER NOT NULL,
     role_id INTEGER NOT NULL,
     FOREIGN KEY (user_id) REFERENCES user(id),
     FOREIGN KEY (role_id) REFERENCES role(id)
);


create table music_app.menu (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    url VARCHAR(50) NOT NULL,
    name VARCHAR(50) NOT NULL
);
create table music_app.auth (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    role_id INTEGER NOT NULL,
    menu_id INTEGER NOT NULL,
    permission INTEGER NOT NULL,
    FOREIGN KEY (role_id) REFERENCES role(id),
    FOREIGN KEY (menu_id) REFERENCES menu(id)
);

create table music_app.category (
    id INTEGER not null primary key AUTOINCREMENT,
    category_name varchar(50) not null
);

create table music_app.music (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    music_name VARCHAR(50) NOT NULL,
    music_url VARCHAR(50) NOT NULL,
    img_url VARCHAR(50) NOT NULL,
    ratting INTEGER(11) NOT NULL,
    category_id INTEGER NOT NULL,
    release_year INTEGER not null,
    FOREIGN KEY (category_id) REFERENCES category(id)
);

INSERT INTO role(role_name, descripton) VALUES("Admin", "Admin of system"),
("User","User of system");

INSERT INTO menu(url, name) VALUES("add", "Thêm nhạc"),
("edit", "Sửa nhạc"),
("remove", "Xóa nhạc"),
("list_user", "Danh sách người dùng");

INSERT INTO category(category_name) VALUES ("POP"), ("Country"), ("Rock"),
("Jazz"),("Blues"), ("Bolero"), ("Rap"), ("Ballad");

