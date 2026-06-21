// addr: 0x004cb685
// name: FUN_004cb685
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_004cb685(int param_1)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  
                    /* Allocates or pops a 12-byte event node; newly allocated nodes create a
                       manual-reset Win32 event handle with CreateEventA. Class identity is unknown.
                        */
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = Mem_Alloc(0xc);
    puVar1[1] = 0;
    puVar1[2] = 0;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    *puVar1 = pvVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = puVar1[1];
  }
  return puVar1;
}

