// addr: 0x0138aac0
// name: Card_addKeywordFromValueData
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Card_addKeywordFromValueData(int *param_1,int param_2)

{
  int iVar1;
  
                    /* Adds a keyword from a ValueData object when the type id is supported,
                       otherwise logs 'Card.addkeyword(ValueData) couldnt get type'. It dispatches
                       to the card add-keyword virtual for type 2. */
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0138aadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1ac))();
    return;
  }
  if (iVar1 != 3) {
    Game_logGeneral((void *)param_1[0xc],"Card.addkeyword(ValueData) couldnt\' get type: %d",iVar1);
  }
  return;
}

