// addr: 0x00f90270
// name: SslLibrary_CryptoDllWrapper_createAndInit
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall SslLibrary_CryptoDllWrapper_createAndInit(void *param_1,undefined4 param_2)

{
  char cVar1;
  void *newHolder;
  void **holderSlot;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  void **local_1c [2];
  HMODULE local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates and initializes the Crypt32.dll wrapper used by the SSL library. */
  puStack_8 = &LAB_01629c98;
  local_c = ExceptionList;
  newHolder = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  local_1c[0] = (void **)0x0;
  local_4 = 0;
  holderSlot = Mem_Alloc(0x34);
  if (holderSlot == (void **)0x0) {
    holderSlot = (void **)0x0;
  }
  else {
    *holderSlot = (void *)0x0;
    holderSlot[2] = (void *)0x0;
    holderSlot[3] = (void *)0x0;
    holderSlot[4] = (void *)0x0;
    holderSlot[5] = (void *)0x0;
    holderSlot[6] = (void *)0x0;
    holderSlot[7] = (void *)0x0;
    holderSlot[8] = (void *)0x0;
    holderSlot[9] = (void *)0x0;
    holderSlot[10] = (void *)0x0;
    holderSlot[0xb] = (void *)0x0;
    holderSlot[0xc] = (void *)0x0;
  }
  local_4._0_1_ = 1;
  local_14 = (HMODULE)holderSlot;
  cVar1 = SslLibrary_AdvApiDllWrapper_init(param_2);
  if (cVar1 == '\0') {
    if (holderSlot != (void **)0x0) {
      if (*holderSlot != (HMODULE)0x0) {
        FreeLibrary(*holderSlot);
        *holderSlot = (void *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      _free(holderSlot);
    }
  }
  else {
    local_14 = (HMODULE)0x0;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_1c[0] = holderSlot;
    hModule = LoadLibraryA("Crypt32.dll");
    if (hModule == (HMODULE)0x0) {
      FUN_00f99fd0(2,param_2,"SslLibary::CryptoDllWrapper::Init, LoadLibrary failed, lib=\"%s\"",
                   "Crypt32.dll");
      if (holderSlot != (void **)0x0) {
        if (*holderSlot != (HMODULE)0x0) {
          FreeLibrary(*holderSlot);
          *holderSlot = (void *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        _free(holderSlot);
      }
    }
    else {
      local_14 = hModule;
      pFVar2 = GetProcAddress(hModule,"CertCloseStore");
      if (pFVar2 != (FARPROC)0x0) {
        pFVar3 = GetProcAddress(hModule,"CertEnumCertificatesInStore");
        if (pFVar3 == (FARPROC)0x0) {
          FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                       "CertEnumCertificatesInStore");
          FreeLibrary(hModule);
          FUN_00f8ff80(local_1c);
          ExceptionList = local_c;
          return 0;
        }
        pFVar4 = GetProcAddress(hModule,"CertGetNameStringA");
        if (pFVar4 == (FARPROC)0x0) {
          FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                       "CertGetNameStringA");
          FreeLibrary(hModule);
          FUN_00f8ff80(local_1c);
          ExceptionList = local_c;
          return 0;
        }
        pFVar5 = GetProcAddress(hModule,"CertOpenStore");
        if (pFVar5 == (FARPROC)0x0) {
          FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                       "CertOpenStore");
          FreeLibrary(hModule);
          FUN_00f8ff80(local_1c);
          ExceptionList = local_c;
          return 0;
        }
        pFVar6 = GetProcAddress(hModule,"CertOpenSystemStoreA");
        if (pFVar6 == (FARPROC)0x0) {
          FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                       "CertOpenSystemStoreA");
          FreeLibrary(hModule);
          FUN_00f8ff80(local_1c);
          ExceptionList = local_c;
          return 0;
        }
        pFVar7 = GetProcAddress(hModule,"CertVerifyTimeValidity");
        if (pFVar7 == (FARPROC)0x0) {
          FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                       "CertVerifyTimeValidity");
          FreeLibrary(hModule);
          FUN_00f8ff80(local_1c);
          ExceptionList = local_c;
          return 0;
        }
        pFVar8 = GetProcAddress(hModule,"CryptBinaryToStringA");
        if (pFVar8 == (FARPROC)0x0) {
          FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                       "CryptBinaryToStringA");
          FreeLibrary(hModule);
          FUN_00f8ff80(local_1c);
          ExceptionList = local_c;
          return 0;
        }
        local_1c[0] = (void **)0x0;
        FUN_00f90220(param_1,holderSlot,newHolder);
        FUN_00f8f610((void *)((int)param_1 + 8),hModule,newHolder);
        *(FARPROC *)((int)param_1 + 0x14) = pFVar3;
        *(FARPROC *)((int)param_1 + 0x10) = pFVar2;
        *(FARPROC *)((int)param_1 + 0x18) = pFVar4;
        *(FARPROC *)((int)param_1 + 0x20) = pFVar6;
        *(FARPROC *)((int)param_1 + 0x1c) = pFVar5;
        *(FARPROC *)((int)param_1 + 0x24) = pFVar7;
        *(FARPROC *)((int)param_1 + 0x28) = pFVar8;
        FUN_00f8ff80(local_1c);
        ExceptionList = local_c;
        return 1;
      }
      FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",
                   "CertCloseStore");
      FreeLibrary(hModule);
      if (holderSlot != (void **)0x0) {
        if (*holderSlot != (HMODULE)0x0) {
          FreeLibrary(*holderSlot);
          *holderSlot = (void *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        _free(holderSlot);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

