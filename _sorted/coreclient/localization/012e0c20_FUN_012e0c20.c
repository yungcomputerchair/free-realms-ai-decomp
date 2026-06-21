// addr: 0x012e0c20
// name: FUN_012e0c20
// subsystem: common/coreclient/localization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_012e0c20(int param_1)

{
                    /* Unidentified helper; references strings
                       ..\\common\\coreclient\\localization\\localizationmanagerbase.cc. */
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_012f5a60("this->IsValid()",
                 "..\\common\\coreclient\\localization\\localizationmanagerbase.cc",0x55);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

