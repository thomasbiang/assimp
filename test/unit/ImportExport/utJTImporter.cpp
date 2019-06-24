#include "UnitTestPCH.h"
#include "AbstractImportExportBase.h"

#include <assimp/Importer.hpp>
#include <assimp/postprocess.h>

class utJTImportExport : public AbstractImportExportBase {
public:
    virtual bool importerTest() {
        Assimp::Importer importer;
        const aiScene* scene = importer.ReadFile(ASSIMP_TEST_MODELS_DIR "/JT/conrod.jt", aiProcess_ValidateDataStructure);
        return nullptr != scene;
    }
};

TEST_F(utJTImportExport, importLWObox_uv) {
    EXPECT_TRUE(importerTest());
}
