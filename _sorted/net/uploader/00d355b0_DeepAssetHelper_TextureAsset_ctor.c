// addr: 0x00d355b0
// name: DeepAssetHelper_TextureAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_TextureAsset_ctor(void * this, char * assetPath,
   undefined4 arg2_, bool validateExtension_, bool arg4_) */

void * __thiscall
DeepAssetHelper_TextureAsset_ctor
          (void *this,char *assetPath,undefined4 arg2_,bool validateExtension_,bool arg4_)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepAssetHelper::TextureAsset, stores metadata flags, and
                       optionally checks the asset path for the 0x5e character before adjusting a
                       flag. Evidence is DeepAssetHelper::TextureAsset::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01613968;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FUN_007cc650(assetPath);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x28) = arg2_;
  *(undefined ***)this = DeepAssetHelper::TextureAsset::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(bool *)((int)this + 0x30) = arg4_;
  *(bool *)((int)this + 0x31) = validateExtension_;
  if ((validateExtension_) && (assetPath != (char *)0x0)) {
    iVar2 = FUN_006fbdb0(assetPath,0x5e,uVar1);
    *(bool *)((int)this + 0x31) = iVar2 == 0;
  }
  ExceptionList = local_c;
  return this;
}

