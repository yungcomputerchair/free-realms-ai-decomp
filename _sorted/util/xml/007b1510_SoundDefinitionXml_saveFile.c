// addr: 0x007b1510
// name: SoundDefinitionXml_saveFile
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoundDefinitionXml_saveFile(char * path) */

void __thiscall SoundDefinitionXml_saveFile(void *this,char *path)

{
  undefined1 local_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and saves the sound definition XML file if a non-empty path is
                       supplied. Evidence: constructs a TiXmlDocument, emits sound driver/master
                       category sections, saves with TiXmlDocument::SaveFile, and destroys the
                       document. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155df58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((path != (char *)0x0) && (*path != '\0')) {
    FUN_00d51c30(path);
    local_4 = 0;
    SoundDefinitionXml_writeSoundDriver(*(void **)((int)this + 8));
    SoundDefinitionXml_writeMasterCategories(this);
    FUN_007b0bc0(local_54);
    FUN_00d51ec0(path);
    local_4 = 0xffffffff;
    FUN_00796020();
  }
  ExceptionList = local_c;
  return;
}

