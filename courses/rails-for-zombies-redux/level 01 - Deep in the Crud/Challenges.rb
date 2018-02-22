# FIND I
Zombie.find(1)
# CREATE
Zombie.create(name: "X", graveyard: "Y")
# FIND II
Zombie.last
# QUERY
Zombie.order(:name)
# UPDATE
z = Zombie.find(3)
z.graveyard = "Benny Hills Memorial"
z.save
# DESTROY
Zombie.find(3).destroy