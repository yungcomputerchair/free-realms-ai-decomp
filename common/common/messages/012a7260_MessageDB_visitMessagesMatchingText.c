// addr: 0x012a7260
// name: MessageDB_visitMessagesMatchingText
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: void MessageDB_visitMessagesMatchingText(void * needle, void * callback, int
   flags_, int version_) */

void __thiscall
MessageDB_visitMessagesMatchingText(void *this,void *needle,void *callback,int flags_,int version_)

{
  int iVar1;
  char *******pppppppcVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  int iVar5;
  char *******pppppppcVar6;
  char *******pppppppcVar7;
  int iVar8;
  char *******pppppppcStack_64;
  uint uStack_60;
  int iStack_5c;
  int iStack_58;
  void *local_54;
  int local_50;
  void *local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  char *******apppppppcStack_44 [4];
  int iStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  char *******apppppppcStack_28 [4];
  int iStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  iVar8 = version_;
                    /* Lowercases the search string and each cached message text, tests for
                       substring matches, and invokes a callback/helper for matching entries. It
                       ensures the requested version is loaded before scanning. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166bfe0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&pppppppcStack_64;
  ExceptionList = &local_c;
  local_4c = callback;
  local_50 = flags_;
  local_54 = this;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x182,
                 DAT_01b839d8 ^ (uint)&stack0xffffff8c);
  }
  MessageDB_openStorageForVersion(this,iVar8);
  uStack_14 = 0xf;
  iStack_18 = 0;
  apppppppcStack_28[0] = (char *******)((uint)apppppppcStack_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_2c,needle,0,0xffffffff);
  uStack_4 = 0;
  if (uStack_14 < 0x10) {
    pppppppcStack_64 = (char *******)apppppppcStack_28;
LAB_012a731c:
    pppppppcVar6 = apppppppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppppcVar6 = (char *******)apppppppcStack_28;
    }
    if (pppppppcStack_64 < pppppppcVar6) goto LAB_012a7340;
    pppppppcVar6 = apppppppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppppcVar6 = (char *******)apppppppcStack_28;
    }
    if ((char *******)((int)pppppppcVar6 + iStack_18) < pppppppcStack_64) goto LAB_012a7340;
  }
  else {
    pppppppcStack_64 = apppppppcStack_28[0];
    if (apppppppcStack_28[0] != (char *******)0x0) goto LAB_012a731c;
LAB_012a7340:
    FUN_00d83c2d();
  }
  pppppppcVar6 = apppppppcStack_28[0];
  if (uStack_14 < 0x10) {
    pppppppcVar6 = (char *******)apppppppcStack_28;
  }
  pppppppcVar6 = (char *******)((int)pppppppcVar6 + iStack_18);
  if (pppppppcVar6 == (char *******)0x0) {
LAB_012a7387:
    FUN_00d83c2d();
  }
  else {
    pppppppcVar2 = apppppppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppppcVar2 = (char *******)apppppppcStack_28;
    }
    if (pppppppcVar6 < pppppppcVar2) goto LAB_012a7387;
    pppppppcVar2 = apppppppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppppcVar2 = (char *******)apppppppcStack_28;
    }
    if ((char *******)((int)pppppppcVar2 + iStack_18) < pppppppcVar6) goto LAB_012a7387;
  }
  if (uStack_14 < 0x10) {
    pppppppcVar2 = (char *******)apppppppcStack_28;
LAB_012a73a7:
    pppppppcVar7 = apppppppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppppcVar7 = (char *******)apppppppcStack_28;
    }
    if (pppppppcVar7 <= pppppppcVar2) {
      pppppppcVar7 = apppppppcStack_28[0];
      if (uStack_14 < 0x10) {
        pppppppcVar7 = (char *******)apppppppcStack_28;
      }
      if (pppppppcVar2 <= (char *******)((int)pppppppcVar7 + iStack_18)) goto LAB_012a73cc;
    }
  }
  else {
    pppppppcVar2 = apppppppcStack_28[0];
    if (apppppppcStack_28[0] != (char *******)0x0) goto LAB_012a73a7;
  }
  FUN_00d83c2d();
LAB_012a73cc:
  uStack_60 = uStack_60 & 0xffffff00;
  FUN_012a26c0(&iStack_5c,pppppppcVar2,pppppppcVar6,abStack_2c,pppppppcStack_64,_tolower,local_50,
               uStack_60);
  local_54 = (void *)((int)local_54 + 0x18);
  iStack_5c = StdMapIntValue_subscriptOrInsert(&version_);
  iStack_58 = **(int **)(iStack_5c + 4);
  do {
    iVar1 = StdMapIntValue_subscriptOrInsert(&version_);
    iVar5 = iStack_5c;
    iVar8 = *(int *)(iVar1 + 4);
    if ((iStack_5c == 0) || (iStack_5c != iVar1)) {
      FUN_00d83c2d();
    }
    iVar1 = iStack_58;
    if (iStack_58 == iVar8) {
      uStack_4 = 0xffffffff;
      if (uStack_14 < 0x10) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(apppppppcStack_28[0]);
    }
    if (iVar5 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar5 + 4)) {
      FUN_00d83c2d();
    }
    uStack_60 = iVar1 + 0xc;
    uStack_30 = 0xf;
    iStack_34 = 0;
    apppppppcStack_44[0] = (char *******)((uint)apppppppcStack_44[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_48,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iVar1 + 0x10),0,0xffffffff);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (uStack_30 < 0x10) {
      pppppppcVar6 = (char *******)apppppppcStack_44;
LAB_012a74ae:
      pppppppcVar2 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar2 = (char *******)apppppppcStack_44;
      }
      pppppppcStack_64 = pppppppcVar6;
      if (pppppppcVar6 < pppppppcVar2) goto LAB_012a74d2;
      pppppppcVar2 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar2 = (char *******)apppppppcStack_44;
      }
      if ((char *******)((int)pppppppcVar2 + iStack_34) < pppppppcVar6) goto LAB_012a74d2;
    }
    else {
      pppppppcStack_64 = apppppppcStack_44[0];
      pppppppcVar6 = apppppppcStack_44[0];
      if (apppppppcStack_44[0] != (char *******)0x0) goto LAB_012a74ae;
LAB_012a74d2:
      pppppppcVar6 = pppppppcStack_64;
      FUN_00d83c2d();
    }
    pppppppcVar2 = apppppppcStack_44[0];
    if (uStack_30 < 0x10) {
      pppppppcVar2 = (char *******)apppppppcStack_44;
    }
    pppppppcVar2 = (char *******)((int)pppppppcVar2 + iStack_34);
    if (pppppppcVar2 == (char *******)0x0) {
LAB_012a7515:
      FUN_00d83c2d();
    }
    else {
      pppppppcVar7 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar7 = (char *******)apppppppcStack_44;
      }
      if (pppppppcVar2 < pppppppcVar7) goto LAB_012a7515;
      pppppppcVar7 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar7 = (char *******)apppppppcStack_44;
      }
      if ((char *******)((int)pppppppcVar7 + iStack_34) < pppppppcVar2) goto LAB_012a7515;
    }
    if (uStack_30 < 0x10) {
      pppppppcVar7 = (char *******)apppppppcStack_44;
LAB_012a7535:
      pppppppcVar3 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar3 = (char *******)apppppppcStack_44;
      }
      if (pppppppcVar7 < pppppppcVar3) goto LAB_012a7555;
      pppppppcVar3 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar3 = (char *******)apppppppcStack_44;
      }
      if ((char *******)((int)pppppppcVar3 + iStack_34) < pppppppcVar7) goto LAB_012a7555;
    }
    else {
      pppppppcVar7 = apppppppcStack_44[0];
      if (apppppppcStack_44[0] != (char *******)0x0) goto LAB_012a7535;
LAB_012a7555:
      FUN_00d83c2d();
    }
    if (&stack0x00000000 != (undefined1 *)0x46) {
      pppppppcVar3 = apppppppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppppcVar3 = (char *******)apppppppcStack_44;
      }
      pppppppcVar4 = (char *******)((int)pppppppcVar6 + ((int)pppppppcVar2 - (int)pppppppcVar7));
      if (pppppppcVar4 <= (char *******)((int)pppppppcVar3 + iStack_34)) {
        pppppppcVar3 = apppppppcStack_44[0];
        if (uStack_30 < 0x10) {
          pppppppcVar3 = (char *******)apppppppcStack_44;
        }
        pppppppcVar6 = pppppppcStack_64;
        if (pppppppcVar3 <= pppppppcVar4) goto LAB_012a759e;
      }
      FUN_00d83c2d();
      pppppppcVar6 = pppppppcStack_64;
    }
LAB_012a759e:
    if (pppppppcVar7 != pppppppcVar2) {
      iVar8 = (int)pppppppcVar6 - (int)pppppppcVar7;
      do {
        iVar5 = _tolower((int)*(char *)pppppppcVar7);
        *(char *)((int)pppppppcVar7 + iVar8) = (char)iVar5;
        pppppppcVar7 = (char *******)((int)pppppppcVar7 + 1);
      } while (pppppppcVar7 != pppppppcVar2);
    }
    pppppppcVar6 = apppppppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppppcVar6 = (char *******)apppppppcStack_28;
    }
    iVar8 = FUN_01231320(pppppppcVar6,0,iStack_18);
    if (iVar8 != -1) {
      if (iVar8 == 0) {
        if (iStack_58 == *(int *)(iStack_5c + 4)) {
          FUN_00d83c2d();
        }
      }
      else if (iStack_58 == *(int *)(iStack_5c + 4)) {
        FUN_00d83c2d();
      }
      FUN_0042c155(uStack_60);
    }
    uStack_4 = uStack_4 & 0xffffff00;
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(apppppppcStack_44[0]);
    }
    apppppppcStack_44[0] = (char *******)((uint)apppppppcStack_44[0] & 0xffffff00);
    iStack_34 = 0;
    uStack_30 = 0xf;
    MessageDB_RbTreeIterator_next(&iStack_5c);
  } while( true );
}

