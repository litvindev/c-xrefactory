#define TYPE_NAME 257
#define CLASS_NAME 258
#define TEMPLATE_NAME 259
#define CONVERSION_OP_ID_PREFIX 260
#define OPERATOR_IDENT 261
#define INC_OP 262
#define DEC_OP 263
#define LEFT_OP 264
#define RIGHT_OP 265
#define LE_OP 266
#define GE_OP 267
#define EQ_OP 268
#define NE_OP 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define LEFT_ASSIGN 277
#define RIGHT_ASSIGN 278
#define AND_ASSIGN 279
#define XOR_ASSIGN 280
#define OR_ASSIGN 281
#define PTR_OP 282
#define ELIPSIS 283
#define URIGHT_OP 284
#define URIGHT_ASSIGN 285
#define YACC_PERC 286
#define YACC_DPERC 287
#define DPOINT 288
#define POINTM_OP 289
#define PTRM_OP 290
#define STATIC 291
#define BREAK 292
#define CASE 293
#define CHAR 294
#define CONST 295
#define CONTINUE 296
#define DEFAULT 297
#define DO 298
#define DOUBLE 299
#define ELSE 300
#define FLOAT 301
#define FOR 302
#define GOTO 303
#define IF 304
#define INT 305
#define LONG 306
#define RETURN 307
#define SHORT 308
#define SWITCH 309
#define VOID 310
#define VOLATILE 311
#define WHILE 312
#define TYPEDEF 313
#define EXTERN 314
#define AUTO 315
#define REGISTER 316
#define SIGNED 317
#define UNSIGNED 318
#define STRUCT 319
#define UNION 320
#define ENUM 321
#define SIZEOF 322
#define TYPEOF 323
#define RESTRICT 324
#define _ATOMIC 325
#define _BOOL 326
#define _THREADLOCAL 327
#define _NORETURN 328
#define ANONYME_MOD 329
#define ABSTRACT 330
#define BOOLEAN 331
#define BYTE 332
#define CATCH 333
#define CLASS 334
#define EXTENDS 335
#define FINAL 336
#define FINALLY 337
#define IMPLEMENTS 338
#define IMPORT 339
#define INSTANCEOF 340
#define INTERFACE 341
#define NATIVE 342
#define NEW 343
#define PACKAGE 344
#define PRIVATE 345
#define PROTECTED 346
#define PUBLIC 347
#define SUPER 348
#define SYNCHRONIZED 349
#define THIS 350
#define THROW 351
#define THROWS 352
#define TRANSIENT 353
#define TRY 354
#define TRUE_LITERAL 355
#define FALSE_LITERAL 356
#define NULL_LITERAL 357
#define STRICTFP 358
#define ASSERT 359
#define FRIEND 360
#define OPERATOR 361
#define NAMESPACE 362
#define TEMPLATE 363
#define DELETE 364
#define MUTABLE 365
#define EXPLICIT 366
#define WCHAR_T 367
#define BOOL 368
#define USING 369
#define ASM_KEYWORD 370
#define EXPORT 371
#define VIRTUAL 372
#define INLINE 373
#define TYPENAME 374
#define DYNAMIC_CAST 375
#define STATIC_CAST 376
#define REINTERPRET_CAST 377
#define CONST_CAST 378
#define TYPEID 379
#define TOKEN 380
#define TYPE 381
#define LABEL 382
#define COMPL_FOR_SPECIAL1 383
#define COMPL_FOR_SPECIAL2 384
#define COMPL_THIS_PACKAGE_SPECIAL 385
#define COMPL_TYPE_NAME 386
#define COMPL_STRUCT_NAME 387
#define COMPL_STRUCT_REC_NAME 388
#define COMPL_UP_FUN_PROFILE 389
#define COMPL_ENUM_NAME 390
#define COMPL_LABEL_NAME 391
#define COMPL_OTHER_NAME 392
#define COMPL_CLASS_DEF_NAME 393
#define COMPL_FULL_INHERITED_HEADER 394
#define COMPL_TYPE_NAME0 395
#define COMPL_TYPE_NAME1 396
#define COMPL_PACKAGE_NAME0 397
#define COMPL_EXPRESSION_NAME0 398
#define COMPL_METHOD_NAME0 399
#define COMPL_PACKAGE_NAME1 400
#define COMPL_EXPRESSION_NAME1 401
#define COMPL_METHOD_NAME1 402
#define COMPL_CONSTRUCTOR_NAME0 403
#define COMPL_CONSTRUCTOR_NAME1 404
#define COMPL_CONSTRUCTOR_NAME2 405
#define COMPL_CONSTRUCTOR_NAME3 406
#define COMPL_STRUCT_REC_PRIM 407
#define COMPL_STRUCT_REC_SUPER 408
#define COMPL_QUALIF_SUPER 409
#define COMPL_SUPER_CONSTRUCTOR1 410
#define COMPL_SUPER_CONSTRUCTOR2 411
#define COMPL_THIS_CONSTRUCTOR 412
#define COMPL_IMPORT_SPECIAL 413
#define COMPL_VARIABLE_NAME_HINT 414
#define COMPL_CONSTRUCTOR_HINT 415
#define COMPL_METHOD_PARAM1 416
#define COMPL_METHOD_PARAM2 417
#define COMPL_METHOD_PARAM3 418
#define COMPL_YACC_LEXEM_NAME 419
#define CPP_TOKENS_START 420
#define CPP_INCLUDE 421
#define CPP_INCLUDENEXT 422
#define CPP_DEFINE 423
#define CPP_IFDEF 424
#define CPP_IFNDEF 425
#define CPP_IF 426
#define CPP_ELSE 427
#define CPP_ENDIF 428
#define CPP_ELIF 429
#define CPP_UNDEF 430
#define CPP_PRAGMA 431
#define CPP_LINE 432
#define CPP_DEFINE0 433
#define CPP_TOKENS_END 434
#define CPP_COLLATION 435
#define CPP_DEFINED_OP 436
#define EOI_TOKEN 437
#define CACHING1_TOKEN 438
#define OL_MARKER_TOKEN 439
#define OL_MARKER_TOKEN1 440
#define OL_MARKER_TOKEN2 441
#define TMP_TOKEN1 442
#define TMP_TOKEN2 443
#define CCC_OPER_PARENTHESIS 444
#define CCC_OPER_BRACKETS 445
#define MULTI_TOKENS_START 446
#define IDENTIFIER 447
#define CONSTANT 448
#define LONG_CONSTANT 449
#define FLOAT_CONSTANT 450
#define DOUBLE_CONSTANT 451
#define STRING_LITERAL 452
#define LINE_TOK 453
#define IDENT_TO_COMPLETE 454
#define CPP_MAC_ARG 455
#define IDENT_NO_CPP_EXPAND 456
#define CHAR_LITERAL 457
#define LAST_TOKEN 458
typedef union {
	int									integer;
	unsigned							unsign;
	S_symbol							*symbol;
	S_symbolList						*symbolList;
	S_typeModifiers						*typeModif;
	S_typeModifiersList					*typeModifList;
	S_freeTrail     					*trail;
	S_idIdent							*idIdent;
	S_idIdentList						*idlist;
	S_exprTokenType						exprType;
	S_intPair							intpair;
	S_whileExtractData					*whiledata;
	S_position							position;
	S_unsPositionPair					unsPositionPair;
	S_symbolPositionPair				symbolPositionPair;
	S_symbolPositionLstPair				symbolPositionLstPair;
	S_positionLst						*positionLst;
	S_typeModifiersListPositionLstPair 	typeModifiersListPositionLstPair;

	S_extRecFindStr							*erfs;

	S_bb_int								bbinteger;
	S_bb_unsigned							bbunsign;
	S_bb_symbol								bbsymbol;
	S_bb_symbolList							bbsymbolList;
	S_bb_typeModifiers						bbtypeModif;
	S_bb_typeModifiersList					bbtypeModifList;
	S_bb_freeTrail     						bbtrail;
	S_bb_idIdent							bbidIdent;
	S_bb_idIdentList						bbidlist;
	S_bb_exprTokenType						bbexprType;
	S_bb_intPair							bbintpair;
	S_bb_whileExtractData					bbwhiledata;
	S_bb_position							bbposition;
	S_bb_unsPositionPair					bbunsPositionPair;
	S_bb_symbolPositionPair					bbsymbolPositionPair;
	S_bb_symbolPositionLstPair				bbsymbolPositionLstPair;
	S_bb_positionLst						bbpositionLst;
	S_bb_typeModifiersListPositionLstPair 	bbtypeModifiersListPositionLstPair;
	S_bb_nestedConstrTokenType				bbnestedConstrTokenType;
} YYSTYPE;
extern YYSTYPE yylval;
