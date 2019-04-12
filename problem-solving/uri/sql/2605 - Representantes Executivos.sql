/**
 * URI
 * Problem Id : 2605
 * Problem Name: Representantes Executivos
 */

SELECT prod.name, prov.name 
FROM products AS prod
JOIN providers AS prov ON prod.id_providers = prov.id
WHERE prod.id_categories = 6