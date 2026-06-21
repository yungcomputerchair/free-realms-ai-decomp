// addr: 0x012a6cd0
// name: MessageDB_collectMessagesMatchingText
// subsystem: common/common/messages
// source (binary assert): common/common/messages/MessageDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void MessageDB_collectMessagesMatchingText(void * needle, void * outMatches,
   int flags_, int version_) */

void __thiscall
MessageDB_collectMessagesMatchingText
          (void *this,void *needle,void *outMatches,int flags_,int version_)

{
  void *valueObj;
  int iVar1;
  char *****pppppcVar2;
  char *****pppppcVar3;
  int iVar4;
  char *****pppppcVar5;
  void *pvVar6;
  int *messageId;
  char *****pppppcVar7;
  int iVar8;
  char ****ppppcStack_a4;
  int iStack_a0;
  int iStack_9c;
  int *piStack_98;
  void *local_94;
  void *local_90;
  void *local_8c;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  char ****appppcStack_44 [4];
  int iStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  char ****appppcStack_28 [4];
  int iStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  iVar8 = version_;
                    /* Scans all cached messages for a case-folded substring and appends matching
                       id/text records to an output vector. It lowercases both the needle and each
                       message text before testing. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166bf93;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&ppppcStack_a4;
  valueObj = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff4c);
  ExceptionList = &local_c;
  local_8c = outMatches;
  local_90 = (void *)flags_;
  local_94 = this;
  if (version_ == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\messages\\MessageDB.cpp",0x16a);
  }
  MessageDB_openStorageForVersion(this,iVar8);
  uStack_14 = 0xf;
  iStack_18 = 0;
  appppcStack_28[0] = (char ****)((uint)appppcStack_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_2c,needle,0,0xffffffff);
  uStack_4 = 0;
  if (uStack_14 < 0x10) {
    ppppcStack_a4 = (char ****)appppcStack_28;
LAB_012a6dad:
    pppppcVar5 = (char *****)appppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppcVar5 = appppcStack_28;
    }
    if (ppppcStack_a4 < pppppcVar5) goto LAB_012a6dda;
    pppppcVar5 = (char *****)appppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppcVar5 = appppcStack_28;
    }
    if ((char *****)((int)pppppcVar5 + iStack_18) < ppppcStack_a4) goto LAB_012a6dda;
  }
  else {
    ppppcStack_a4 = appppcStack_28[0];
    if ((char *****)appppcStack_28[0] != (char *****)0x0) goto LAB_012a6dad;
LAB_012a6dda:
    FUN_00d83c2d();
  }
  pppppcVar5 = (char *****)appppcStack_28[0];
  if (uStack_14 < 0x10) {
    pppppcVar5 = appppcStack_28;
  }
  pppppcVar5 = (char *****)((int)pppppcVar5 + iStack_18);
  if (pppppcVar5 == (char *****)0x0) {
LAB_012a6e36:
    FUN_00d83c2d();
  }
  else {
    pppppcVar7 = (char *****)appppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppcVar7 = appppcStack_28;
    }
    if (pppppcVar5 < pppppcVar7) goto LAB_012a6e36;
    pppppcVar7 = (char *****)appppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppcVar7 = appppcStack_28;
    }
    if ((char *****)((int)pppppcVar7 + iStack_18) < pppppcVar5) goto LAB_012a6e36;
  }
  if (uStack_14 < 0x10) {
    pppppcVar7 = appppcStack_28;
LAB_012a6e5f:
    pppppcVar2 = (char *****)appppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppcVar2 = appppcStack_28;
    }
    if (pppppcVar2 <= pppppcVar7) {
      pppppcVar2 = (char *****)appppcStack_28[0];
      if (uStack_14 < 0x10) {
        pppppcVar2 = appppcStack_28;
      }
      if (pppppcVar7 <= (char *****)((int)pppppcVar2 + iStack_18)) goto LAB_012a6e8a;
    }
  }
  else {
    pppppcVar7 = (char *****)appppcStack_28[0];
    if ((char *****)appppcStack_28[0] != (char *****)0x0) goto LAB_012a6e5f;
  }
  FUN_00d83c2d();
LAB_012a6e8a:
  piStack_98 = (int *)((uint)piStack_98 & 0xffffff00);
  FUN_012a26c0(&iStack_a0,pppppcVar7,pppppcVar5,abStack_2c,ppppcStack_a4,_tolower,local_90,
               piStack_98);
  local_94 = (void *)((int)local_94 + 0x18);
  iStack_a0 = StdMapIntValue_subscriptOrInsert(&version_);
  iStack_9c = **(int **)(iStack_a0 + 4);
  do {
    iVar1 = StdMapIntValue_subscriptOrInsert(&version_);
    iVar4 = iStack_a0;
    iVar8 = *(int *)(iVar1 + 4);
    if ((iStack_a0 == 0) || (iStack_a0 != iVar1)) {
      FUN_00d83c2d();
    }
    iVar1 = iStack_9c;
    if (iStack_9c == iVar8) {
      uStack_4 = 0xffffffff;
      if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
        _free(appppcStack_28[0]);
      }
      ExceptionList = local_c;
      return;
    }
    if (iVar4 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar4 + 4)) {
      FUN_00d83c2d();
    }
    messageId = (int *)(iStack_9c + 0xc);
    uStack_30 = 0xf;
    iStack_34 = 0;
    appppcStack_44[0] = (char ****)((uint)appppcStack_44[0] & 0xffffff00);
    piStack_98 = messageId;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_48,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (iStack_9c + 0x10),0,0xffffffff);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    if (uStack_30 < 0x10) {
      ppppcStack_a4 = (char ****)appppcStack_44;
LAB_012a6f81:
      pppppcVar5 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar5 = appppcStack_44;
      }
      if (ppppcStack_a4 < pppppcVar5) goto LAB_012a6fa8;
      pppppcVar5 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar5 = appppcStack_44;
      }
      if ((char *****)((int)pppppcVar5 + iStack_34) < ppppcStack_a4) goto LAB_012a6fa8;
    }
    else {
      ppppcStack_a4 = appppcStack_44[0];
      if ((char *****)appppcStack_44[0] != (char *****)0x0) goto LAB_012a6f81;
LAB_012a6fa8:
      FUN_00d83c2d();
    }
    pppppcVar5 = (char *****)appppcStack_44[0];
    if (uStack_30 < 0x10) {
      pppppcVar5 = appppcStack_44;
    }
    pppppcVar5 = (char *****)((int)pppppcVar5 + iStack_34);
    if (pppppcVar5 == (char *****)0x0) {
LAB_012a6ff1:
      FUN_00d83c2d();
    }
    else {
      pppppcVar7 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar7 = appppcStack_44;
      }
      if (pppppcVar5 < pppppcVar7) goto LAB_012a6ff1;
      pppppcVar7 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar7 = appppcStack_44;
      }
      if ((char *****)((int)pppppcVar7 + iStack_34) < pppppcVar5) goto LAB_012a6ff1;
    }
    if (uStack_30 < 0x10) {
      pppppcVar7 = appppcStack_44;
LAB_012a7017:
      pppppcVar2 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar2 = appppcStack_44;
      }
      if (pppppcVar7 < pppppcVar2) goto LAB_012a7037;
      pppppcVar2 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar2 = appppcStack_44;
      }
      if ((char *****)((int)pppppcVar2 + iStack_34) < pppppcVar7) goto LAB_012a7037;
    }
    else {
      pppppcVar7 = (char *****)appppcStack_44[0];
      if ((char *****)appppcStack_44[0] != (char *****)0x0) goto LAB_012a7017;
LAB_012a7037:
      FUN_00d83c2d();
    }
    if (&stack0x00000000 != (undefined1 *)0x46) {
      pppppcVar2 = (char *****)appppcStack_44[0];
      if (uStack_30 < 0x10) {
        pppppcVar2 = appppcStack_44;
      }
      pppppcVar3 = (char *****)((int)ppppcStack_a4 + ((int)pppppcVar5 - (int)pppppcVar7));
      if (pppppcVar3 <= (char *****)((int)pppppcVar2 + iStack_34)) {
        pppppcVar2 = (char *****)appppcStack_44[0];
        if (uStack_30 < 0x10) {
          pppppcVar2 = appppcStack_44;
        }
        messageId = piStack_98;
        if (pppppcVar2 <= pppppcVar3) goto LAB_012a708a;
      }
      FUN_00d83c2d();
      messageId = piStack_98;
    }
LAB_012a708a:
    if (pppppcVar7 != pppppcVar5) {
      iVar8 = (int)ppppcStack_a4 - (int)pppppcVar7;
      do {
        iVar4 = _tolower((int)*(char *)pppppcVar7);
        *(char *)((int)pppppcVar7 + iVar8) = (char)iVar4;
        pppppcVar7 = (char *****)((int)pppppcVar7 + 1);
      } while (pppppcVar7 != pppppcVar5);
    }
    pppppcVar5 = (char *****)appppcStack_28[0];
    if (uStack_14 < 0x10) {
      pppppcVar5 = appppcStack_28;
    }
    iVar8 = FUN_01231320(pppppcVar5,0,iStack_18);
    if (iVar8 == -1) {
      uStack_4 = uStack_4 & 0xffffff00;
    }
    else {
      if (iVar8 == 0) {
        if (iStack_9c == *(int *)(iStack_a0 + 4)) {
          FUN_00d83c2d();
        }
        pvVar6 = MessageDB_Record_ctor(auStack_68,messageId,abStack_48);
        uStack_4._0_1_ = 2;
        Vector32_pushBack(local_8c,pvVar6,valueObj);
      }
      else {
        if (iStack_9c == *(int *)(iStack_a0 + 4)) {
          FUN_00d83c2d();
        }
        pvVar6 = MessageDB_Record_ctor(auStack_88,messageId,abStack_48);
        uStack_4._0_1_ = 3;
        Vector32_pushBack(local_90,pvVar6,valueObj);
      }
      uStack_4._0_1_ = 1;
      FUN_012a27c0();
      uStack_4 = (uint)uStack_4._1_3_ << 8;
    }
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(appppcStack_44[0]);
    }
    appppcStack_44[0] = (char ****)((uint)appppcStack_44[0] & 0xffffff00);
    iStack_34 = 0;
    uStack_30 = 0xf;
    MessageDB_RbTreeIterator_next(&iStack_a0);
  } while( true );
}

