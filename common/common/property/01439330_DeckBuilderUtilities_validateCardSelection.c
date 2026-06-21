// addr: 0x01439330
// name: DeckBuilderUtilities_validateCardSelection
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckBuilderUtilities_validateCardSelection(void * request) */

bool __fastcall DeckBuilderUtilities_validateCardSelection(void *request)

{
  undefined1 uVar1;
  uint uVar2;
  int *extraout_EAX;
  int *extraout_EAX_00;
  undefined4 unaff_retaddr;
  undefined1 local_48 [36];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a temporary DeckBuilderUtilities context, queries the singleton, and
                       validates request fields through a virtual method returning a boolean result.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016974c8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  PropertyTreeSet_ctor(local_48);
  local_4 = 0;
  DeckBuilderUtilities_getInstance();
  (**(code **)(*extraout_EAX + 0x28))(local_48,uVar2);
  DeckBuilderUtilities_getInstance();
  uVar1 = (**(code **)(*extraout_EAX_00 + 0xc))
                    (unaff_retaddr,*(undefined4 *)((int)request + 4),&stack0xffffffb4,
                     *(undefined1 *)((int)request + 8),(int)request + 0xc);
  uStack_1c = 0xffffffff;
  DeckBuilderValidationState_dtor();
  ExceptionList = pvStack_24;
  return (bool)uVar1;
}

