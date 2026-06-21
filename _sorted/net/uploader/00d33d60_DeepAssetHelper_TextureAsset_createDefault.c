// addr: 0x00d33d60
// name: DeepAssetHelper_TextureAsset_createDefault
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall DeepAssetHelper_TextureAsset_createDefault(int param_1,char *param_2)

{
  void *this;
  uint arg2_;
  bool validateExtension_;
  bool arg4_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a TextureAsset helper using the default texture/render resource
                       arguments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016134fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(0x34);
  local_4 = 0;
  if (this != (void *)0x0) {
    arg4_ = false;
    validateExtension_ = true;
    arg2_ = getNestedField_1d0(*(void **)(param_1 + 8));
    DeepAssetHelper_TextureAsset_ctor(this,param_2,arg2_,validateExtension_,arg4_);
  }
  ExceptionList = local_c;
  return;
}

