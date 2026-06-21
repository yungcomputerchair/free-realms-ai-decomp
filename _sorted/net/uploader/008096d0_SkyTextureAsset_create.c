// addr: 0x008096d0
// name: SkyTextureAsset_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall SkyTextureAsset_create(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a SkyTextureAsset from the input object
                       path/descriptor. Evidence is the named SkyTextureAsset_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SkyTextureAsset_ctor(pvVar1,*(void **)(param_1 + 8));
  }
  ExceptionList = local_c;
  return pvVar1;
}

