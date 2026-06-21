// addr: 0x0138ab40
// name: Card_removeKeywordFromValueData
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Card_removeKeywordFromValueData(int *param_1,int param_2)

{
  int iVar1;
  
                    /* Removes a keyword from a ValueData object when the type id is supported,
                       otherwise logs 'Card.removeKeyword(valueData) couldn't get type'. It
                       dispatches to the card remove-keyword virtual for type 2. */
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0138ab5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b4))();
    return;
  }
  if (iVar1 != 3) {
    Game_logGeneral((void *)param_1[0xc],"Card.removeKeyword(valueData) couldn\'t get type: %d",
                    iVar1);
  }
  return;
}

