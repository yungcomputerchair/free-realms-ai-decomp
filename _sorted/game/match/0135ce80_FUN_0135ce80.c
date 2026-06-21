// addr: 0x0135ce80
// name: FUN_0135ce80
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0135ce80(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Returns the result of scanning an int-key container for a matching entry. It
                       builds an iterator range from the input, calls a search helper that writes to
                       local param_1, and destroys the temporary range. */
  FUN_01354e20(&local_10,param_1);
  param_1 = 0;
  FUN_0134fdf0(local_10,local_c,local_8,local_4,&param_1,0);
  FUN_005152ac(&local_10,local_10,local_c,local_8,local_4);
  return param_1;
}

