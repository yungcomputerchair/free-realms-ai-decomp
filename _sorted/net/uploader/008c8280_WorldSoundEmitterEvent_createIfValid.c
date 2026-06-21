// addr: 0x008c8280
// name: WorldSoundEmitterEvent_createIfValid
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldSoundEmitterEvent_createIfValid(void * assetId, int arg2_, int
   arg3_, void ** outAsset) */

void * __thiscall
WorldSoundEmitterEvent_createIfValid(void *this,void *assetId,int arg2_,int arg3_,void **outAsset)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up the referenced asset, validates it through a virtual method, and
                       allocates/constructs a WorldSoundEmitterEvent when valid; returns null
                       otherwise. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0158276b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    piVar2 = (int *)FUN_00709a70();
    *(int **)arg3_ = piVar2;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 != '\0') {
        pvVar3 = Mem_Alloc(0xa0);
        uStack_4 = 0;
        if (pvVar3 != (void *)0x0) {
          pvVar3 = WorldSoundEmitterEvent_ctor(pvVar3);
          ExceptionList = local_c;
          return pvVar3;
        }
        ExceptionList = local_c;
        return (void *)0x0;
      }
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

