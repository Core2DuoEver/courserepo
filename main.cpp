#include "Deciduous_Forest.h";
#include "Ñoniferous_forest.h";

int main() {
    Deciduous_Forest dec_Forest;
    Coniferous_Forest conf_Forest;

    dec_Forest.growUp(std::make_unique<Oak>("Oak_tree1"));
    dec_Forest.growUp(std::make_unique<Birch>("Birch_tree2"));
    dec_Forest.growUp(std::make_unique<Pine>("NotDec_tree"));

    conf_Forest.growUp(std::make_unique<Pine>("Pine_tree1"));
    conf_Forest.growUp(std::make_unique<Spruce>("Spruce_tree2"));
    conf_Forest.growUp(std::make_unique<Birch>("NotConf_tree"));

    dec_Forest.windInForest();

    conf_Forest.windInForest();

    std::cout << "Total dec : " << dec_Forest.getTreesNumber() << "\n";
    std::cout << "Total conf : " << conf_Forest.getTreesNumber() << "\n";

    std::cout << "Total oak : " << Oak::getOakCount() << "\n";
    std::cout << "Total birch : " << Birch::getBirchCount() << "\n";
    std::cout << "Total pine : " << Pine::getPineCount() << "\n";
    std::cout << "Total spruce : " << Spruce::getSpruceCount() << "\n";
}