// addr: 0x00aaae80
// name: FUN_00aaae80
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void FUN_00aaae80(void * this, int a_, int b_, int c_, int d_, int e_) */

void __thiscall FUN_00aaae80(void *this,int a_,int b_,int c_,int d_,int e_)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  bool bVar4;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* When enabled, samples a transform, creates a large 0x230-byte effect/object
                       with context data, updates it with an offset transform, and toggles a flag on
                       a related actor. No class name is visible. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_015c305b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(char *)((int)this + 0x16) != '\0') {
    FUN_008a7d50(&local_40);
    copyNestedVector4_610(*(void **)((int)this + 0x10),&local_60);
    local_30 = local_40 + _DAT_0175b420 * local_60;
    fStack_2c = fStack_3c + _DAT_0175b420 * fStack_5c;
    fStack_28 = fStack_38 + _DAT_0175b420 * fStack_58;
    fStack_24 = fStack_34 + _DAT_0175b420 * fStack_54;
    pvVar2 = Mem_Alloc(0x230);
    local_14 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00cba340(a_,b_,c_,d_,e_,*(undefined4 *)(*(int *)((int)this + 0x10) + 0xe8),0);
    }
    local_14 = 0xffffffff;
    *(undefined4 *)((int)this + 0x40bc) = uVar3;
    local_50 = _DAT_01cb53d0;
    uStack_4c = uRam01cb53d4;
    uStack_48 = uRam01cb53d8;
    uStack_44 = uRam01cb53dc;
    FUN_00cb9a70(&local_30,&local_50);
    bVar4 = *(int *)((int)this + 0x40bc) == 0;
    if ((*(char *)((int)this + 0x16) != '\0') && (*(char *)((int)this + 0xeedc) != '\0')) {
      bVar4 = false;
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x10) + 0x1a8);
    if (iVar1 != 0) {
      *(bool *)(iVar1 + 0x61) = bVar4;
    }
  }
  ExceptionList = local_1c;
  return;
}

