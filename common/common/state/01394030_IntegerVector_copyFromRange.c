// addr: 0x01394030
// name: IntegerVector_copyFromRange
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IntegerVector_copyFromRange(void * dst, void * src) */

void * __thiscall IntegerVector_copyFromRange(void *this,void *dst,void *src)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uStack_38;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Initializes dst and copies a source vector of 32-bit integers into newly
                       allocated storage. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01684300;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  if (*(int *)((int)dst + 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)((int)dst + 8) - *(int *)((int)dst + 4) >> 2;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar6 != 0) {
    local_18 = this;
    puVar1 = &uStack_38;
    if (0x3fffffff < uVar6) {
      FUN_01332b00();
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    iVar2 = FUN_0132f010(uVar6);
    *(int *)((int)this + 4) = iVar2;
    *(int *)((int)this + 8) = iVar2;
    *(uint *)((int)this + 0xc) = iVar2 + uVar6 * 4;
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_0138ca60(local_20);
    puVar4 = (undefined4 *)FUN_0138ca30(local_28);
    uVar5 = FUN_0138fd60(*puVar4,puVar4[1],*puVar3,puVar3[1],*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 8) = uVar5;
  }
  ExceptionList = local_10;
  return this;
}

