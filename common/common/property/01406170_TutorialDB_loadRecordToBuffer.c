// addr: 0x01406170
// name: TutorialDB_loadRecordToBuffer
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Setting prototype: uint TutorialDB_loadRecordToBuffer(void * this, void * record_name, void *
   out_buffer) */

uint __thiscall TutorialDB_loadRecordToBuffer(void *this,void *record_name,void *out_buffer)

{
  char cVar1;
  bool bVar2;
  uint size;
  char *******pppppppcVar3;
  uint recordId;
  undefined3 extraout_var;
  uint uVar4;
  char *******pppppppcVar5;
  void *local_54;
  void *local_50;
  void *local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  char *******local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds an ODB record name using the TutorialDB prefix, finds the record id,
                       verifies it exists, fetches record data, and assigns it to the output raw
                       buffer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691400;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_54;
  size = DAT_01b839d8 ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  local_50 = record_name;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (char *******)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)this + 0x1c),0,0xffffffff);
  local_4 = 0;
  FUN_01241650(&DAT_018e439c,2);
  StdString_appendSubstring(out_buffer,0,0xffffffff);
  pppppppcVar5 = local_28[0];
  if (local_14 < 0x10) {
    pppppppcVar5 = (char *******)local_28;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pppppppcVar3 = pppppppcVar5;
  do {
    cVar1 = *(char *)pppppppcVar3;
    pppppppcVar3 = (char *******)((int)pppppppcVar3 + 1);
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,(char *)pppppppcVar5,(int)pppppppcVar3 - ((int)pppppppcVar5 + 1));
  local_4._0_1_ = 1;
  recordId = OdbFile_findRecordId(*(void **)((int)this + 4),(char *)local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_30 < 0x10) {
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    uVar4 = recordId;
    if (recordId != 0xffffffff) {
      bVar2 = OdbFile_hasRecord(*(void **)((int)this + 4),recordId);
      uVar4 = CONCAT31(extraout_var,bVar2);
      if ((uVar4 == 1) &&
         (uVar4 = OdbFile_getRecordData(*(int *)((int)this + 4),&local_54,(int *)&local_4c,recordId)
         , uVar4 == 1)) {
        RawBuffer_assign(local_50,local_54,local_4c,size);
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
    }
    if (local_14 < 0x10) {
      ExceptionList = local_c;
      return uVar4 & 0xffffff00;
    }
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44);
}

