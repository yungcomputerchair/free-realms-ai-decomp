// addr: 0x00809740
// name: SkyAmbientTextureAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * SkyAmbientTextureAsset_ctor(void * this) */

void * __thiscall SkyAmbientTextureAsset_ctor(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *in_stack_00000004;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs a SkyAmbientTextureAsset object: runs its base constructor,
                       installs the SkyAmbientTextureAsset vtable, and initializes owned fields. It
                       initializes ambient color/vector defaults after the SkyTextureAsset base
                       constructor. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01567c18;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  SkyTextureAsset_ctor(this,in_stack_00000004);
  *(undefined ***)this = SkyAmbientTextureAsset::vftable;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  *(undefined4 *)((int)this + 0x30) = _DAT_01cb53d0;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  *(undefined4 *)((int)this + 0x40) = _DAT_0175b420;
  ExceptionList = local_1c;
  return this;
}

