// addr: 0x0141c600
// name: FUN_0141c600
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int compare_field_18(void * this, void * other) */

int __thiscall compare_field_18(void *this,void *other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Compares this object against another via a helper over the field at offset
                       +0x18; no state-domain strings identify the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693dc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f15f0((int)this + 0x128);
  ExceptionList = local_c;
  return (int)other;
}

