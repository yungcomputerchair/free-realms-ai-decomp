// addr: 0x00f9d320
// name: CardClient_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CardClient_ctor(void * this, int arg2_, int arg3_, char * commandLine,
   char * username, char * sessionId, int realm_, int arg8_, int arg9_, void * iface, int arg11_,
   int languageId_) */

void __thiscall
CardClient_ctor(void *this,int arg2_,int arg3_,char *commandLine,char *username,char *sessionId,
               int realm_,int arg8_,int arg9_,void *iface,int arg11_,int languageId_)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  char **ppcVar10;
  undefined4 uVar11;
  long defaultValue_;
  char *local_240;
  char *pcStack_23c;
  void *apvStack_238 [4];
  undefined4 uStack_228;
  uint uStack_224;
  char *local_218;
  int local_214;
  void *local_210;
  void *local_20c;
  undefined4 uStack_200;
  uint local_1fc;
  char *local_1f8;
  char *local_1f4;
  int local_1f0 [5];
  undefined4 uStack_1dc;
  undefined1 auStack_1d4 [28];
  undefined1 auStack_1b8 [28];
  undefined1 auStack_19c [28];
  undefined1 auStack_180 [4];
  undefined1 local_17c [72];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_134 [4];
  void *local_130;
  void *local_12c;
  undefined4 uStack_120;
  uint local_11c;
  uint local_118;
  CHAR aCStack_110 [256];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the card client from command-line/session data: tokenizes
                       arguments, selects locale strings, loads preferences.dat/debug mode, stores
                       iface, and maps realms to production/QA/stage/live. Evidence is the
                       .\cardclient.cc assert 'iface != 0' plus TCG client strings such as
                       --username, --sessionID, --lang and production realm names. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162ac08;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_240;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xfffffdb0;
  ExceptionList = &local_c;
  local_218 = username;
  local_1f4 = sessionId;
  local_1f0[0] = realm_;
  local_214 = arg11_;
  local_240 = (char *)0x0;
  Utility_TokenBuilder_ctor(local_17c);
  local_4 = 0;
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_130," ,",2);
  local_4._0_1_ = 1;
  local_1f8 = (char *)0xf;
  local_1fc = 0;
  local_20c = (void *)((uint)local_20c & 0xffffff00);
  pcVar4 = commandLine;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_210,
             commandLine,(int)pcVar4 - (int)(commandLine + 1));
  local_4._0_1_ = 2;
  FUN_012ec970(&local_210,&local_130,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < local_1f8) {
                    /* WARNING: Subroutine does not return */
    _free(local_20c);
  }
  local_1f8 = (char *)0xf;
  local_1fc = 0;
  local_20c = (void *)((uint)local_20c & 0xffffff00);
  local_4._0_1_ = 0;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  if (iface == (void *)0x0) {
    FUN_012f5a60("iface != 0",".\\cardclient.cc",0xae,uVar3);
  }
  *(void **)((int)this + 0x14) = iface;
  switch(languageId_) {
  case 1:
    pcStack_23c = "zh_CN";
    break;
  case 2:
    pcStack_23c = "de_DE";
    break;
  case 3:
    pcStack_23c = "fr_FR";
    break;
  case 4:
    pcStack_23c = "en_GB";
    break;
  case 5:
    pcStack_23c = "ja_JP";
    break;
  case 6:
    pcStack_23c = "ko_KR";
    break;
  case 7:
    pcStack_23c = "zh_TW";
    break;
  default:
    pcStack_23c = "en_US";
    break;
  case 9:
    pcStack_23c = "es_ES";
    break;
  case 10:
    pcStack_23c = "it_IT";
    break;
  case 0xc:
    pcStack_23c = "ru_RU";
    break;
  case 0xd:
    pcStack_23c = "sv_SE";
    break;
  case 0xe:
    pcStack_23c = "pt_BR";
    break;
  case 0xf:
    pcStack_23c = "es_MX";
  }
  GetCurrentDirectoryA(0x100,aCStack_110);
  pcVar4 = aCStack_110;
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_130,
             aCStack_110,(int)pcVar4 - (int)(aCStack_110 + 1));
  local_4._0_1_ = 3;
  ResourcePath_setBaseDirectory(&local_130);
  local_4._0_1_ = 0;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  local_1f8 = &DAT_0000000f;
  local_1fc = 0;
  local_20c = (void *)((uint)local_20c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_210,
             "preferences.dat",0xf);
  local_4._0_1_ = 4;
  piVar5 = (int *)FUN_012e4410();
  pvVar6 = ResourcePath_buildFilePath(apvStack_238,&local_210);
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar5 + 4))(pvVar6);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
  if (0xf < uStack_224) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_238[0]);
  }
  uStack_224 = 0xf;
  uStack_228 = 0;
  apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
  puStack_8._0_1_ = 0;
  if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_210);
  }
  local_1fc = 0xf;
  uStack_200 = 0;
  local_210 = (void *)((uint)local_210 & 0xffffff00);
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (void *)((uint)local_130 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_134,"/debug/debug_mode",0x11);
  puStack_8._0_1_ = 6;
  pbVar9 = abStack_134;
  uVar11 = 0;
  FUN_012e4410(pbVar9,0);
  FUN_012e40b0(pbVar9,uVar11);
  puStack_8._0_1_ = 0;
  if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (void *)((uint)local_130 & 0xffffff00);
  local_1fc = 0xf;
  uStack_200 = 0;
  local_210 = (void *)((uint)local_210 & 0xffffff00);
  pcVar4 = local_240;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_214,local_240
             ,(int)pcVar4 - (int)(local_240 + 1));
  puStack_8._0_1_ = 7;
  local_11c = 0xf;
  uStack_120 = 0;
  local_130 = (void *)((uint)local_130 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_134,"--lang",6);
  puStack_8._0_1_ = 8;
  piVar5 = &local_214;
  pbVar9 = abStack_134;
  pcVar4 = Utility_TokenBuilder_getTokenString(auStack_180);
  CommandLine_getOptionValueOrDefault(auStack_19c,pcVar4,pbVar9,piVar5);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
  if (local_11c < 0x10) {
    local_11c = 0xf;
    uStack_120 = 0;
    local_130 = (void *)((uint)local_130 & 0xffffff00);
    puStack_8._0_1_ = 0xb;
    if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_210);
    }
    local_1fc = 0xf;
    uStack_200 = 0;
    local_210 = (void *)((uint)local_210 & 0xffffff00);
    uStack_224 = 0xf;
    uStack_228 = 0;
    apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
    pcVar4 = local_1f4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_23c,
               local_1f4,(int)pcVar4 - (int)(local_1f4 + 1));
    puStack_8._0_1_ = 0xc;
    local_11c = 0xf;
    uStack_120 = 0;
    local_130 = (void *)((uint)local_130 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_134,"--sessionID",0xb);
    puStack_8._0_1_ = 0xd;
    ppcVar10 = &pcStack_23c;
    pbVar9 = abStack_134;
    pcVar4 = Utility_TokenBuilder_getTokenString(auStack_180);
    CommandLine_getOptionValueOrDefault(auStack_1d4,pcVar4,pbVar9,ppcVar10);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xf);
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_11c = 0xf;
    uStack_120 = 0;
    uVar3 = (uint)local_130 >> 8;
    local_130 = (void *)(uVar3 << 8);
    puStack_8._0_1_ = 0x10;
    if (0xf < uStack_224) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_238[0]);
    }
    uStack_224 = 0xf;
    uStack_228 = 0;
    apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
    local_11c = 0xf;
    uStack_120 = 0;
    local_130 = (void *)(uVar3 << 8);
    pcVar4 = local_1f8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_134,local_1f8,(int)pcVar4 - (int)(local_1f8 + 1));
    puStack_8._0_1_ = 0x11;
    uStack_224 = 0xf;
    uStack_228 = 0;
    apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_23c,
               "--realm",7);
    puStack_8._0_1_ = 0x12;
    pbVar9 = abStack_134;
    ppcVar10 = &pcStack_23c;
    pcVar4 = Utility_TokenBuilder_getTokenString(auStack_180);
    CommandLine_getOptionValueOrDefault(local_1f0,pcVar4,ppcVar10,pbVar9);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x14);
    if (uStack_224 < 0x10) {
      uStack_224 = 0xf;
      uStack_228 = 0;
      uVar3 = (uint)apvStack_238[0] >> 8;
      apvStack_238[0] = (void *)(uVar3 << 8);
      puStack_8._0_1_ = 0x15;
      if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_130);
      }
      local_11c = 0xf;
      uStack_120 = 0;
      local_130 = (void *)((uint)local_130 & 0xffffff00);
      uStack_224 = 0xf;
      uStack_228 = 0;
      apvStack_238[0] = (void *)(uVar3 << 8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_23c,
                 "--fullscreen",0xc);
      puStack_8._0_1_ = 0x16;
      defaultValue_ = 1;
      ppcVar10 = &pcStack_23c;
      pcVar4 = Utility_TokenBuilder_getTokenString(auStack_180);
      CommandLine_getLongOptionValueOrDefault(pcVar4,ppcVar10,defaultValue_);
      puStack_8._0_1_ = 0x15;
      if (0xf < uStack_224) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_238[0]);
      }
      uStack_224 = 0xf;
      uStack_228 = 0;
      apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
      local_11c = 0xf;
      uStack_120 = 0;
      local_130 = (void *)((uint)local_130 & 0xffffff00);
      pcVar4 = local_218;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_134,local_218,(int)pcVar4 - (int)(local_218 + 1));
      puStack_8._0_1_ = 0x17;
      uStack_224 = 0xf;
      uStack_228 = 0;
      apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&pcStack_23c,
                 "--username",10);
      puStack_8._0_1_ = 0x18;
      pbVar9 = abStack_134;
      ppcVar10 = &pcStack_23c;
      pcVar4 = Utility_TokenBuilder_getTokenString(auStack_180);
      CommandLine_getOptionValueOrDefault(auStack_1b8,pcVar4,ppcVar10,pbVar9);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1a);
      if (0xf < uStack_224) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_238[0]);
      }
      uStack_224 = 0xf;
      uStack_228 = 0;
      apvStack_238[0] = (void *)((uint)apvStack_238[0] & 0xffffff00);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1b);
      if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_130);
      }
      local_11c = 0xf;
      uStack_120 = 0;
      local_130 = (void *)((uint)local_130 & 0xffffff00);
      iVar8 = 1;
      iVar7 = FUN_00f942a0(0,uStack_1dc,"frscg_live",10);
      if ((iVar7 == 0) || (iVar7 = FUN_00f942a0(0,uStack_1dc,"production",10), iVar7 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar7 = FUN_00f942a0(0,uStack_1dc,"frscg_livetest",0xe);
        if ((iVar7 == 0) || (bVar2 = TokenString_equalsCString(local_1f0,"livetest"), bVar2)) {
          iVar8 = 4;
        }
        else {
          bVar2 = TokenString_equalsCString(local_1f0,"frscg_main");
          if ((!bVar2) && (bVar2 = TokenString_equalsCString(local_1f0,"dev"), !bVar2)) {
            bVar2 = TokenString_equalsCString(local_1f0,"frscg_qa");
            if ((bVar2) || (bVar2 = TokenString_equalsCString(local_1f0,"qa"), bVar2)) {
              iVar8 = 2;
            }
            else {
              bVar2 = TokenString_equalsCString(local_1f0,"frscg_stage");
              if ((bVar2) || (bVar2 = TokenString_equalsCString(local_1f0,"stage"), bVar2)) {
                iVar8 = 3;
              }
            }
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00f9dc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_00f9e4fc)[iVar8])();
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_238[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_130);
}

