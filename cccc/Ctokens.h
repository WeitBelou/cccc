#ifndef Ctokens_h
#define Ctokens_h
/* Ctokens.h -- List of labelled tokens and stuff
 *
 * Generated from: cccc.g
 *
 * Terence Parr, Will Cohen, and Hank Dietz: 1989-1999
 * Purdue University Electrical Engineering
 * ANTLR Version 1.33MR20
 */
enum ANTLRTokenType {
	Eof=1,
	WHITESPACE=2,
	DOS_NL=3,
	MAC_NL=4,
	UNIX_NL=5,
	HASH=6,
	DOS_P_EOL=7,
	MAC_P_EOL=8,
	UNIX_P_EOL=9,
	P_LINECONT=10,
	P_ANYTHING=11,
	P_COMMULTI=12,
	RR_DIRECTIVE=13,
	RR_ANYTHING=14,
	RR_END=15,
	COMDEF=16,
	COMLINE=17,
	COMLINE_END=18,
	COMLINE_ANYTHING=19,
	COMMULTI=20,
	COMMULTI_END=21,
	COMMULTI_EOL=22,
	COMMULTI_ANYTHING=23,
	STRINGSTART=24,
	STRINGCONST=25,
	LYNNS_FIX=26,
	ESCAPED_DQUOTE=27,
	ESCAPED_OTHER=28,
	S_ANYTHING=29,
	CHARSTART=30,
	CHARCONST=31,
	CH_ANYTHING=32,
	LBRACE=33,
	RBRACE=34,
	LPAREN=35,
	RPAREN=36,
	LBRACK=37,
	RBRACK=38,
	ASM=39,
	AUTO=40,
	BREAK=41,
	CASE=42,
	CATCH=43,
	KW_CHAR=44,
	CLASS=45,
	KW_CONST=46,
	CONTINUE=47,
	DEFAULT=48,
	DELETE=49,
	DO=50,
	KW_DOUBLE=51,
	ELSE=52,
	ENUM=53,
	EXTERN=54,
	KW_FLOAT=55,
	FOR=56,
	FRIEND=57,
	GOTO=58,
	IF=59,
	INLINE=60,
	KW_INT=61,
	KW_LONG=62,
	NEW=63,
	OPERATOR=64,
	PRIVATE=65,
	PROTECTED=66,
	PUBLIC=67,
	REGISTER=68,
	RETURN=69,
	KW_SHORT=70,
	SIGNED=71,
	SIZEOF=72,
	STATIC=73,
	STRUCT=74,
	SWITCH=75,
	TEMPLATE=76,
	KW_THIS=77,
	THROW=78,
	TRY=79,
	TYPEDEF=80,
	UNION=81,
	UNSIGNED=82,
	VIRTUAL=83,
	KW_VOID=84,
	VOLATILE=85,
	WHILE=86,
	ASSIGN_OP=90,
	GREATERTHAN=105,
	LESSTHAN=106,
	GREATEREQUAL=107,
	LESSEQUAL=108,
	ASTERISK=110,
	LOGICAL_AND_OP=124,
	LOGICAL_OR_OP=125,
	LOGICAL_NOT_OP=126,
	QUERY_OP=127,
	AMPERSAND=128,
	PIPE=129,
	TILDA=130,
	COLONCOLON=132,
	ARROW=133,
	COLON=134,
	PERIOD=135,
	COMMA=136,
	SEMICOLON=137,
	NAMESPACE=138,
	USING=139,
	AND=140,
	AND_EQ=141,
	BITAND=142,
	BITOR=143,
	COMPL=144,
	NOT=145,
	OR=146,
	OR_EQ=147,
	XOR=148,
	XOR_EQ=149,
	KW_BOOL=150,
	BTRUE=151,
	BFALSE=152,
	STATIC_CAST=153,
	REINTERPRET_CAST=154,
	CONST_CAST=155,
	DYNAMIC_CAST=156,
	TYPEID=157,
	IMPLEMENTATION_KEYWORD=158,
	IDENTIFIER=159,
	OCT_NUM=160,
	L_OCT_NUM=161,
	INT_NUM=162,
	L_INT_NUM=163,
	HEX_NUM=164,
	L_HEX_NUM=165,
	FNUM=166,
	ANYTHING=167,
	Start=169,
	Link_item=170,
	End_of_file=171,
	Definition_or_declaration=172,
	Resync_tokens=173,
	Extern_linkage_block=174,
	Namespace_block=175,
	Using_statement=176,
	Explicit_template_instantiation=177,
	Class_declaration_or_definition=178,
	Class_suffix=179,
	Class_suffix_trailer=180,
	Opt_instance_list=181,
	Union_definition=182,
	Anonymous_union_definition=183,
	Named_union_definition=184,
	Enum_definition=185,
	Anonymous_enum_definition=186,
	Named_enum_definition=187,
	Instance_declaration=188,
	Class_block=189,
	Class_block_item_list=190,
	Class_block_item=191,
	Class_item_qualifier_list=192,
	Class_item_qualifier=193,
	Access_modifier=194,
	Method_declaration_or_definition_with_implicit_type=195,
	Method_declaration_or_definition_with_explicit_type=196,
	Method_suffix=197,
	Method_signature=198,
	Type=199,
	Cv_qualifier=200,
	MUTABLE=201,
	Type_name=202,
	Indirection_modifiers=203,
	Indirection_modifier=204,
	Builtin_type=205,
	Type_keyword=206,
	User_type=207,
	Scoped_member_name=208,
	Scoped_identifier=209,
	Explicit_scope_spec=210,
	Unscoped_member_name=211,
	Dtor_member_name=212,
	Operator_member_name=213,
	Operator_identifier=214,
	New_or_delete=215,
	Param_list=216,
	Param_list_items=217,
	More_param_items=218,
	Param_item=219,
	Param_type=220,
	Param_spec=221,
	Knr_param_decl_list=222,
	Opt_const_modifier=223,
	Typedef_definition=224,
	Fptr_typedef_definition=225,
	Struct_typedef_definition=226,
	Simple_typedef_definition=227,
	Identifier_opt=228,
	Tag_list_opt=229,
	Tag=230,
	Simple_type_alias=231,
	Fptr_type_alias=232,
	Class_or_method_declaration_or_definition=233,
	Class_prefix=234,
	Inheritance_list=235,
	Inheritance_item_list=236,
	Inheritance_access_key=237,
	Inheritance_item=238,
	Class_key=239,
	Access_key=240,
	Ctor_init_list=241,
	Ctor_init_item_list=242,
	Ctor_init_item=243,
	Linkage_qualifiers=244,
	Linkage_qualifier=245,
	Identifier_or_brace_block_or_both=246,
	Opt_brace_block=247,
	Instance_item=248,
	Item_specifier=249,
	Opt_initializer=250,
	Init_expr=251,
	Init_expr_item=252,
	Cast_keyword=253,
	Init_value=254,
	Keyword=255,
	EXPLICIT=256,
	Op=257,
	Constant=258,
	Literal=259,
	String_literal=260,
	Block=261,
	Balanced=262,
	Balanced_list=263,
	Nested_token_list=264,
	Nested_token=265,
	Scoped=267,
	Brace_block=268,
	Skip_until_matching_rbrace=269,
	Paren_block=270,
	Brack_block=271,
	Brack_list=272,
	Angle_balanced_list=273,
	Angle_block=274,
	TOKENTYPE_MAX=275,
	DLGminToken=0,
	DLGmaxToken=9999};

#endif
