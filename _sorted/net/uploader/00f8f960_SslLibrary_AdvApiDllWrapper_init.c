// addr: 0x00f8f960
// name: SslLibrary_AdvApiDllWrapper_init
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall SslLibrary_AdvApiDllWrapper_init(void *param_1,undefined4 param_2)

{
  uint newModule_;
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  int iVar9;
  FARPROC pFVar10;
  FARPROC pFVar11;
  char *pcVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the SslLibrary AdvApi32 wrapper by loading AdvApi32.dll and
                       resolving crypto/security entry points; logs failures by missing function
                       name. */
  puStack_8 = &LAB_01629be8;
  local_c = ExceptionList;
  newModule_ = DAT_01b839d8 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  local_4 = 0;
  hModule = LoadLibraryA("AdvApi32.dll");
  if (hModule == (HMODULE)0x0) {
    FUN_00f99fd0(2,param_2,"SslLibary::AdvApiDllWrapper::Init, LoadLibrary failed, lib=\"%s\"",
                 "AdvApi32.dll");
    ExceptionList = local_c;
    return 0;
  }
  pFVar1 = GetProcAddress(hModule,"AllocateAndInitializeSid");
  if (pFVar1 == (FARPROC)0x0) {
    pcVar12 = "AllocateAndInitializeSid";
  }
  else {
    pFVar2 = GetProcAddress(hModule,"CryptAcquireContextA");
    if (pFVar2 == (FARPROC)0x0) {
      pcVar12 = "CryptAcquireContextA";
    }
    else {
      pFVar3 = GetProcAddress(hModule,"CryptCreateHash");
      if (pFVar3 == (FARPROC)0x0) {
        pcVar12 = "CryptCreateHash";
      }
      else {
        pFVar4 = GetProcAddress(hModule,"CryptDestroyHash");
        if (pFVar4 == (FARPROC)0x0) {
          pcVar12 = "CryptDestroyHash";
        }
        else {
          pFVar5 = GetProcAddress(hModule,"CryptGetHashParam");
          if (pFVar5 == (FARPROC)0x0) {
            pcVar12 = "CryptGetHashParam";
          }
          else {
            pFVar6 = GetProcAddress(hModule,"CryptHashData");
            if (pFVar6 == (FARPROC)0x0) {
              pcVar12 = "CryptHashData";
            }
            else {
              pFVar7 = GetProcAddress(hModule,"CryptReleaseContext");
              if (pFVar7 == (FARPROC)0x0) {
                pcVar12 = "CryptReleaseContext";
              }
              else {
                pFVar8 = GetProcAddress(hModule,"FreeSid");
                if (pFVar8 == (FARPROC)0x0) {
                  pcVar12 = "FreeSid";
                }
                else {
                  iVar9 = FUN_00f8f180(param_2);
                  if (iVar9 == 0) goto LAB_00f8f9f7;
                  pFVar10 = GetProcAddress(hModule,"SetEntriesInAclA");
                  if (pFVar10 == (FARPROC)0x0) {
                    pcVar12 = "SetEntriesInAclA";
                  }
                  else {
                    pFVar11 = GetProcAddress(hModule,"SetSecurityDescriptorDacl");
                    if (pFVar11 != (FARPROC)0x0) {
                      FUN_00f8f610(param_1,hModule,newModule_);
                      *(FARPROC *)((int)param_1 + 8) = pFVar1;
                      *(FARPROC *)((int)param_1 + 0xc) = pFVar2;
                      *(FARPROC *)((int)param_1 + 0x10) = pFVar3;
                      *(FARPROC *)((int)param_1 + 0x14) = pFVar4;
                      *(FARPROC *)((int)param_1 + 0x18) = pFVar5;
                      *(FARPROC *)((int)param_1 + 0x1c) = pFVar6;
                      *(FARPROC *)((int)param_1 + 0x20) = pFVar7;
                      *(FARPROC *)((int)param_1 + 0x24) = pFVar8;
                      *(int *)((int)param_1 + 0x28) = iVar9;
                      *(FARPROC *)((int)param_1 + 0x2c) = pFVar10;
                      *(FARPROC *)((int)param_1 + 0x30) = pFVar11;
                      ExceptionList = local_c;
                      return 1;
                    }
                    pcVar12 = "SetSecurityDescriptorDacl";
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00f99fd0(2,param_2,"SslLibrary::GetFuncByName, GetProcAddress failed, proc=\"%s\"",pcVar12);
LAB_00f8f9f7:
  FreeLibrary(hModule);
  ExceptionList = local_c;
  return 0;
}

