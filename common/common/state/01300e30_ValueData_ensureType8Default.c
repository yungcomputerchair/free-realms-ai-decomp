// addr: 0x01300e30
// name: ValueData_ensureType8Default
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_ensureType8Default(void * this) */

void __fastcall ValueData_ensureType8Default(void *this)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If the ValueData-like object is not already type 8, constructs a default
                       type-8 payload with three zero fields and assigns it. Evidence is calls to
                       ValueData helpers and type code 8. */
  puStack_8 = &LAB_01675bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 4) != 8) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    FUN_01300680(8);
    FUN_012fffa0(local_1c);
  }
  ExceptionList = local_c;
  return;
}

