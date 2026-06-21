// addr: 0x013ab330
// name: Engine_Filter_loadArchetypeExtendedData
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_Filter_loadArchetypeExtendedData(void * outString, int
   archetypeId) */

void Engine_Filter_loadArchetypeExtendedData(void *outString,int archetypeId)

{
  void *this;
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  undefined1 local_28 [4];
  void *local_24;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Resolves an archetype and, when present, retrieves and processes its
                       Engine_Filter extended data string before resetting the output string
                       metadata. Evidence is ArchetypeDB_getArchetype and
                       Engine_Filter_getExtendedData calls. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01686731;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this);
  ArchetypeDB_getInstance();
  iVar2 = ArchetypeDB_getArchetype(archetypeId,uVar1);
  if (iVar2 != 0) {
    puVar3 = local_28;
    Engine_Filter_getExtendedData(in_ECX + 8);
    FUN_0143abc0(puVar3,iVar2);
    local_4 = 0;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
  }
  *(undefined4 *)((int)outString + 0x18) = 0xf;
  *(undefined4 *)((int)outString + 0x14) = 0;
  *(undefined1 *)((int)outString + 4) = 0;
  ExceptionList = local_c;
  return;
}

