// addr: 0x012fa060
// name: DisplayAction_addArgValueData
// subsystem: common/common/client
// source (binary assert): common/common/client/DisplayAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayAction_addArgValueData(void * valueData) */

void __thiscall DisplayAction_addArgValueData(void *this,void *valueData)

{
                    /* Validates that a ValueData argument type is one of the
                       DisplayAction-supported codes, asserts on invalid types, then appends it
                       through the DisplayAction argument vector push helper. Evidence is the
                       DisplayAction::addArg assert string in DisplayAction.cpp. */
  switch(*(undefined4 *)((int)valueData + 4)) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    break;
  default:
    FUN_012f5a60("!\"Invalid type passed to DisplayAction::addArg(): \"",
                 "..\\common\\common\\client\\DisplayAction.cpp",0x4f);
  }
  DisplayAction_pushArg((void *)((int)this + 4),valueData);
  return;
}

