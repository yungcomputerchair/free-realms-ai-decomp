// addr: 0x00d80950
// name: FUN_00d80950
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_00d80950(void)

{
  code *pcVar1;
  undefined4 uVar2;
  size_t _Size;
  void *pvVar3;
  HANDLE pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  DWORD local_4;
  
  if (DAT_01bf328c == (undefined4 *)0x0) {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (DAT_01bf328c[5] == 0) {
    _Size = 0x2000000;
  }
  else {
    _Size = DAT_01bf328c[5] << 0x14;
  }
  pvVar3 = _malloc(_Size);
  DAT_01bf328c[4] = pvVar3;
  local_4 = 0;
  pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_00d7fb30,(LPVOID)0x0,0,&local_4);
  DAT_01bf328c[8] = pvVar4;
  pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  DAT_01bf328c[9] = pvVar4;
  pvVar4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  DAT_01bf328c[10] = pvVar4;
  pvVar4 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  DAT_01bf328c[0xb] = pvVar4;
  FUN_00d7e0e0(2,"wwsCrashReportPlatformInit: minidump thread id %X",local_4);
  if (*(char *)((int)DAT_01bf328c + 0x87) == '\0') {
    SetUnhandledExceptionFilter(FUN_00d808c0);
    FUN_00d83bd1(&LAB_00d7fcb0);
    FUN_00d83a97(&LAB_00d7fcd0);
  }
  DAT_01bf3290 = DAT_01bf328c;
  DAT_01bf328c = VirtualAlloc((LPVOID)0x0,0x90,0x3000,4);
  puVar6 = DAT_01bf3290;
  puVar7 = DAT_01bf328c;
  for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return 0;
}

