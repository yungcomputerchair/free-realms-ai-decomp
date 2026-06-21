// addr: 0x0126e490
// name: FUN_0126e490
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_0126e490(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_01660d60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = std::ctype<char>::vftable;
  local_4 = 0;
  if (0 < (int)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  if ((int)param_1[5] < 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  *param_1 = std::ctype_base::vftable;
  *param_1 = std::locale::facet::vftable;
  ExceptionList = pvVar1;
  return;
}

