// addr: 0x00d50480
// name: FUN_00d50480
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ensureEcoDataTexture(void * ecoData) */

void __fastcall ensureEcoDataTexture(void *ecoData)

{
  void *pvVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a GameRuntimeTerrain_EcoData_Texture object, registers it
                       with a provider at +0xcc, and increments a reference/use count otherwise. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616c8b;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if ((*(int *)((int)ecoData + 0x2c) == 0) && (*(int *)((int)ecoData + 0xcc) != 0)) {
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x10);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = GameRuntimeTerrain_EcoData_Texture_ctor(pvVar2,ecoData);
    }
    local_4 = 0xffffffff;
    *(void **)((int)ecoData + 0x2c) = pvVar2;
    (**(code **)(**(int **)((int)ecoData + 0xcc) + 0xc))
              (*(undefined4 *)((int)ecoData + 0x18),0,pvVar2);
    *(undefined4 *)((int)ecoData + 0x30) = 1;
    ExceptionList = pvVar1;
    return;
  }
  *(int *)((int)ecoData + 0x30) = *(int *)((int)ecoData + 0x30) + 1;
  return;
}

