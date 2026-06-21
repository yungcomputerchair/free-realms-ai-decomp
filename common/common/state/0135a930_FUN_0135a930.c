// addr: 0x0135a930
// name: FUN_0135a930
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void configure_wa_log_paths(void) */

void configure_wa_log_paths(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar5;
  DWORD DVar6;
  undefined2 *puVar7;
  uint uVar8;
  HANDLE hFindFile;
  char *****pppppcVar9;
  uint uVar10;
  char *pcVar11;
  char *****pppppcVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5a4 [4];
  char ****local_5a0 [4];
  undefined4 local_590;
  uint local_58c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_588 [4];
  char ****local_584 [4];
  undefined4 local_574;
  uint local_570;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_56c [4];
  undefined4 ****local_568 [5];
  uint local_554;
  undefined1 local_550 [320];
  char local_410 [1024];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds default paths for wa_properties.log, wa_network.log, and wa_xtra.log.
                       No state-domain class evidence is present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167e171;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_5a4;
  ExceptionList = &local_c;
  FUN_00d8e520("wa_xtra.log",DAT_01b839d8 ^ (uint)&stack0xfffffa4c);
  FUN_00d8e520("wa_properties.log");
  FUN_00d8e520("wa_network.log");
  iVar4 = PathConfig_getDefaultBasePath();
  if (iVar4 != 0) {
    pbVar5 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             PathConfig_getDefaultBasePath();
    local_58c = 0xf;
    local_590 = 0;
    local_5a0[0] = (char ****)((uint)local_5a0[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_5a4,pbVar5,0,0xffffffff);
    local_4 = 0;
    local_570 = 0xf;
    local_574 = 0;
    local_584[0] = (char ****)((uint)local_584[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_588,".log",4)
    ;
    local_4._0_1_ = 1;
    pppppcVar9 = (char *****)local_5a0[0];
    if (local_58c < 0x10) {
      pppppcVar9 = local_5a0;
    }
    DVar6 = GetFileAttributesA((LPCSTR)pppppcVar9);
    if ((DVar6 == 0xffffffff) || ((DVar6 & 0x10) == 0)) {
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_570) {
                    /* WARNING: Subroutine does not return */
        _free(local_584[0]);
      }
      local_570 = 0xf;
      local_574 = 0;
      local_584[0] = (char ****)((uint)local_584[0] & 0xffffff00);
      local_4 = 0xffffffff;
      if (0xf < local_58c) {
                    /* WARNING: Subroutine does not return */
        _free(local_5a0[0]);
      }
    }
    else {
      pppppcVar9 = (char *****)local_5a0[0];
      if (local_58c < 0x10) {
        pppppcVar9 = local_5a0;
      }
      pcVar11 = local_410;
      do {
        cVar2 = *(char *)pppppcVar9;
        *pcVar11 = cVar2;
        pppppcVar9 = (char *****)((int)pppppcVar9 + 1);
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      puVar3 = (undefined2 *)(local_550 + 0x13f);
      do {
        puVar7 = puVar3;
        puVar3 = (undefined2 *)((int)puVar7 + 1);
      } while (*(char *)((int)puVar7 + 1) != '\0');
      *(undefined2 *)((int)puVar7 + 1) = DAT_018db808;
      *(undefined1 *)((int)puVar7 + 3) = DAT_018db80a;
      pppppcVar9 = (char *****)local_584[0];
      pppppcVar12 = (char *****)local_584[0];
      if (local_570 < 0x10) {
        pppppcVar9 = local_584;
        pppppcVar12 = pppppcVar9;
      }
      do {
        cVar2 = *(char *)pppppcVar9;
        pppppcVar9 = (char *****)((int)pppppcVar9 + 1);
      } while (cVar2 != '\0');
      uVar8 = (int)pppppcVar9 - (int)pppppcVar12;
      pcVar11 = local_550 + 0x13f;
      do {
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar1 != '\0');
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(char *****)pcVar11 = *pppppcVar12;
        pppppcVar12 = pppppcVar12 + 1;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *(char *)pppppcVar12;
        pppppcVar12 = (char *****)((int)pppppcVar12 + 1);
        pcVar11 = pcVar11 + 1;
      }
      hFindFile = FindFirstFileA(local_410,(LPWIN32_FIND_DATAA)local_550);
      if (hFindFile != (HANDLE)0xffffffff) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_56c,local_550 + 0x2c);
        local_4 = CONCAT31(local_4._1_3_,2);
        if (local_554 < 0x10) {
          local_568[0] = local_568;
        }
        FUN_00d8e520(local_568[0]);
        iVar4 = FindNextFileA(hFindFile,(LPWIN32_FIND_DATAA)local_550);
        while (iVar4 != 0) {
          FUN_00d8e520(local_550 + 0x2c);
          iVar4 = FindNextFileA(hFindFile,(LPWIN32_FIND_DATAA)local_550);
        }
        if (hFindFile != (HANDLE)0x0) {
          FindClose(hFindFile);
        }
        local_4._0_1_ = 1;
        FUN_0041f1d7();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0041f1d7();
      local_4 = 0xffffffff;
      FUN_0041f1d7();
    }
  }
  ExceptionList = local_c;
  return;
}

