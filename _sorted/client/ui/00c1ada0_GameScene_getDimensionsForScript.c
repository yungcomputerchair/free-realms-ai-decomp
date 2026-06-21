// addr: 0x00c1ada0
// name: GameScene_getDimensionsForScript
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameScene_getDimensionsForScript(void * scriptState) */

int __cdecl GameScene_getDimensionsForScript(void *scriptState)

{
  bool bVar1;
  int id_;
  void **outObject;
  void *local_c;
  int local_8;
  int local_4;
  
                    /* Finds the GameScene GCtrl, reads a two-int size/position structure, pushes
                       both values as numbers to the script state, and returns 2 results. Exact
                       dimension source is inferred. */
  outObject = &local_c;
  local_c = (void *)0x0;
  id_ = FUN_00705bc0("GameScene");
  bVar1 = FUN_00819650(DAT_01be1090,id_,outObject);
  if (bVar1) {
    FUN_00d8d382(local_c,0,&GObject::RTTI_Type_Descriptor,&GCtrl::RTTI_Type_Descriptor,0);
  }
  FUN_0041d5df(&local_8,0);
  FUN_00e3aa10(scriptState,(double)local_8);
  FUN_00e3aa10(scriptState,(double)local_4);
  return 2;
}

