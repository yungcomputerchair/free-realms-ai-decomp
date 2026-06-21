// addr: 0x00d3aa30
// name: FUN_00d3aa30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ensureFloraDefinitionTexture(void * floraDef) */

void __fastcall ensureFloraDefinitionTexture(void *floraDef)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a GameRuntimeTerrain_FloraDefinition_Texture object when a
                       source texture provider exists, stores it at +0x2c, and registers it with the
                       provider. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161422b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if ((*(int *)((int)floraDef + 0x2c) == 0) && (*(int *)((int)floraDef + 0x34) != 0)) {
    pvVar2 = Mem_Alloc(0x10);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = GameRuntimeTerrain_FloraDefinition_Texture_ctor(pvVar2,floraDef);
    }
    local_4 = 0xffffffff;
    *(void **)((int)floraDef + 0x2c) = pvVar2;
    (**(code **)(**(int **)((int)floraDef + 0x34) + 0xc))
              (*(undefined4 *)((int)floraDef + 0x1c),0,pvVar2,uVar1);
  }
  ExceptionList = local_c;
  return;
}

