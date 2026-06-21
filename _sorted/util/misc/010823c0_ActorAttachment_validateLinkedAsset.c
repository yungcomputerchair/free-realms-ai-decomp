// addr: 0x010823c0
// name: ActorAttachment_validateLinkedAsset
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActorAttachment_validateLinkedAsset(void * this) */

bool __thiscall ActorAttachment_validateLinkedAsset(void *this)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  
                    /* Checks whether the object has a linked asset at +0xa8; if so, validates both
                       the current object and linked asset and then performs a final compatibility
                       check. */
  if (*(int *)((int)this + 0xa8) == 0) {
    return true;
  }
  iVar1 = FUN_01045d50();
  iVar1 = get_field_14(iVar1);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)((int)this + 0xa8);
    iVar1 = FUN_01045d50(uVar2);
    get_field_14(iVar1);
    this_00 = (void *)FUN_00bae770(uVar2);
    if (this_00 != (void *)0x0) {
      uVar2 = contains_hash2_key(this_00,in_stack_00000004,in_stack_00000008);
      return SUB41(uVar2,0);
    }
  }
  return false;
}

