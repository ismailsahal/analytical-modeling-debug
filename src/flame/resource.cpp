#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>


//#include "node.h"

#include "flame.h"
/*
 * Returns the value of a trait by name, if defined.
 *
 * TODO: What to do if the trait isn't defined?
 * This assumes zero and inserts it into the map
 */
double Flame::Resource::get_trait(std::string& trait) {
    return _traits[trait];
}

Flame::Resource::Resource(std::unordered_map<std::string, double> traits): _traits(traits), _connections({}) {}
Flame::Resource::Resource(): _traits(), _connections({}) {}

/*
 * Breadth-first search for shortest path from this to `target` by number of intermediate nodes
 *
 * TODO: Add directionality (needs to be included in _connections somehow
 */
/*
std::vector<std::shared_ptr<Flame::Resource>> Flame::Resource::path_to(std::shared_ptr<Flame::Resource> target) {

    std::queue<std::vector<std::shared_ptr<Flame::Resource>>> paths;
    for (std::shared_ptr<Flame::Resource> resource: _connections) {
        paths.push({resource});
    }
    while (!paths.empty()) {
        std::vector<std::shared_ptr<Flame::Resource>> path = paths.front();
        paths.pop();
        if (path[0] == target) {
            return path;
        }
        for (std::shared_ptr<Flame::Resource> resource: path[0]->_connections) {
            //std::vector<std::shared_ptr<Flame::Resource>> new_path = {resource};
            //new_path.insert(path.begin(), path.end());
            path.insert(path.begin(), {resource});
            paths.push(path);
        }
    }
    std::vector<std::shared_ptr<Flame::Resource>> a;
    return a;
}
*/
/*
 * Adds a connection between two Resources. This should be called on both sides on the connection.
 */
void Flame::Resource::connect(Flame::Interconnect* target) {
    _connections.insert(target);
}
