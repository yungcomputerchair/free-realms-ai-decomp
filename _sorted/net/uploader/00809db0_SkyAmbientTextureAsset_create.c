// addr: 0x00809db0
// name: SkyAmbientTextureAsset_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * SkyAmbientTextureAsset_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a SkyAmbientTextureAsset from the input object
                       texture descriptor and ambient parameter. Evidence is the named
                       SkyAmbientTextureAsset_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567d7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SkyAmbientTextureAsset_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

