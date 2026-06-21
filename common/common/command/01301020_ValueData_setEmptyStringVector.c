// addr: 0x01301020
// name: ValueData_setEmptyStringVector
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_setEmptyStringVector(void * this) */

void __fastcall ValueData_setEmptyStringVector(void *this)

{
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures a ValueData is type 7 and assigns an empty std::vector<std::string>
                       payload. */
  puStack_8 = &LAB_01675c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 4) != 7) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    FUN_01300680(7);
    StdVector28_assign(local_1c);
  }
  ExceptionList = local_c;
  return;
}

