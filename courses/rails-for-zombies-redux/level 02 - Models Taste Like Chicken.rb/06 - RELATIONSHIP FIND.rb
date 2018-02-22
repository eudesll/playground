z = Zombie.find_by(name: "Ashley")
Weapon.where(zombie: z)