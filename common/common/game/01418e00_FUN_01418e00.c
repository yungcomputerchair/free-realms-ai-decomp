// addr: 0x01418e00
// name: FUN_01418e00
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall FUN_01418e00(int param_1,int param_2)

{
  void *pvVar1;
  
                    /* Looks up an object/card-related entry through the id at this+0x48 and returns
                       it only if the resolved object exists and has its +0x44 flag set; callers
                       include Card_calculateAttribute. */
  pvVar1 = find_play_element_in_maps(*(void **)(param_1 + 0x30),param_2);
  if ((pvVar1 == (void *)0x0) || (*(char *)((int)pvVar1 + 0x44) == '\0')) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

